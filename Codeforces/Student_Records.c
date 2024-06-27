#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct snode {
    int id;
    char * name;
    struct snode * next;
};

struct slist {
    struct snode * front;
};

// Purpose: Checks if the given list is sorted in ascending order by student ID.
// is_sorted(lst) returns true if the list is sorted, false otherwise.
bool is_sorted(struct slist * lst) {
    if (lst == NULL || lst->front == NULL)
        return true; // An empty list or list with only one element is always sorted

    struct snode * current = lst->front;
    while (current->next != NULL) {
        if (current->id > current->next->id)
            return false;
        current = current->next;
    }
    return true;
}

// create_list() returns an empty newly-created list of students
// note: caller must free using free_list
struct slist * create_list() {
    struct slist * lst = malloc(sizeof(struct slist));
    lst->front = NULL;
    return lst;
}

char * find_student(int id, struct slist * lst);

// insert_student(id, name, lst) attempts to add a student with given id and
// name into the given list lst; if a student with that id is already in the
// list then return false, otherwise lst is modified and true is returned
bool insert_student(int id, char name[], struct slist * lst) {
    if (find_student(id, lst) != NULL)
        return false; // Student with the same id already exists

    struct snode * new_node = malloc(sizeof(struct snode));
    new_node->id = id;
    new_node->name = strdup(name);
    new_node->next = NULL;

    if (lst->front == NULL || lst->front->id >= id) {
        new_node->next = lst->front;
        lst->front = new_node;
    } else {
        struct snode * current = lst->front;
        while (current->next != NULL && current->next->id < id)
            current = current->next;
        new_node->next = current->next;
        current->next = new_node;
    }

    assert(is_sorted(lst));
    return true;
}

// remove_student(id, lst) attempts to remove a student with given id from the
// given list and free the memory allocated to that student; true is returned
// if successful and false otherwise
bool remove_student(int id, struct slist * lst) {
    struct snode * current = lst->front;
    struct snode * temp = NULL;

    while (current != NULL && current->id != id) {
        temp = current;
        current = current->next;
    }

    if (current == NULL)
        return false; // Student with given id not found

    if (temp == NULL) {
        lst->front = current->next;
    } else {
        temp->next = current->next;
    }

    free(current->name);
    free(current);

    assert(is_sorted(lst));
    return true;
}

// find_student(id, lst) returns the name of the student with given id in the
// given list lst in a dynamically-allocated string (that the caller must
// free) or NULL if no student has that id
char * find_student(int id, struct slist * lst) {
    struct snode * current = lst->front;
    while (current != NULL) {
        if (current->id == id)
            return current->name;
        current = current->next;
    }
    return NULL; // Student with given id not found
}

// free_list (lst) deallocates all memory associated with the given list lst
// including the memory used by the student records in the list
void free_list(struct slist * lst) {
    struct snode * current = lst->front;
    while (current != NULL) {
        struct snode * temp = current;
        current = current->next;
        free(temp->name);
        free(temp);
    }
    free(lst);
}

int main() {
    struct slist * lst = create_list();

    // Test is_sorted function
    // Empty list (vacuously sorted)
    assert(is_sorted(lst));

    // Sorted list with at least three students
    insert_student(101, "Rahi", lst);
    insert_student(102, "Ahmed", lst);
    insert_student(103, "Ussra", lst);
    assert(is_sorted(lst));

    // Unsorted list with at least three students
    remove_student(102, lst); // Remove Bob to make the list unsorted
    insert_student(105, "David", lst);
    insert_student(104, "Eve", lst);
    assert(is_sorted(lst));

    // Automatic Testing (using scanf)
    char command[20];
    int id;
    char name[30];

    while (scanf("%s", command) == 1) {
        if (strcmp(command, "insert") == 0) {
            scanf("%d %s", &id, name);
            if (insert_student(id, name, lst))
                printf("success\n");
            else
                printf("failure\n");
        } else if (strcmp(command, "remove") == 0) {
            scanf("%d", &id);
            if (remove_student(id, lst))
                printf("success\n");
            else
                printf("failure\n");
        } else if (strcmp(command, "find") == 0) {
            scanf("%d", &id);
            char * result = find_student(id, lst);
            if (result != NULL)
                printf("%s\n", result);
            else
                printf("failure\n");
        } else if (strcmp(command, "free") == 0) {
            free_list(lst);
            break;
        }
        assert(is_sorted(lst));
    }

    return 0;
}
