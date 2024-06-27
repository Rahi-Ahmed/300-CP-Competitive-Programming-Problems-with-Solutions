#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct student {
    int id;          // student ID
    char * name;     // first name of student
};

struct student * create_student(const int id, const char * name){
// Allocate memory for the student struct
    struct student *new_student = malloc(sizeof(struct student));
    if (new_student == NULL) {
        return NULL; // Memory allocation failed
    }
    // Set the ID
    new_student->id = id;

    // Allocate memory for the name
    new_student->name = malloc(strlen(name) + 1);
    if (new_student->name == NULL) {
        free(new_student); // Free memory for student struct
        return NULL; // Memory allocation failed
    }

    // Copy the name
    strcpy(new_student->name, name);

    return new_student;
}

bool change_name(struct student * s, const char * new_name){
    // Reallocate memory for the new name
    char *new_name_ptr = realloc(s->name, strlen(new_name) + 1);
    if (new_name_ptr == NULL) {
        return false; // Memory allocation failed
    }

    // Update the name pointer
    s->name = new_name_ptr;

    // Copy the new name
    strcpy(s->name, new_name);

    return true;
}

void free_student(struct student * s){
    if (s != NULL) {
        free(s->name); // Free allocated memory for name
        free(s); // Free allocated memory for student struct
    }
}

void print_student(const struct student * s){
    if (s != NULL) {
        printf("%d %s\n", s->id, s->name);
    }
}


int main(void) {
    // ====================================
    // Add Your Own Tests Using Assert Here
    struct student *s1 = create_student(123456, "Rahi");
    assert(s1 != NULL);
    assert(s1->id == 123456);
    assert(strcmp(s1->name, "Rahi") == 0);

    assert(change_name(s1, "Ahmed") == true);
    assert(strcmp(s1->name, "Ahmed") == 0);

    struct student *s2 = create_student(789012, "Mohammad");
    assert(s2 != NULL);
    assert(s2->id == 789012);
    assert(strcmp(s2->name, "Mohammad") == 0);

    assert(change_name(s2, "David") == true);
    assert(strcmp(s2->name, "David") == 0);

    struct student *s3 = create_student(345678, "Alice");
    assert(s3 != NULL);
    assert(s3->id == 345678);
    assert(strcmp(s3->name, "Alice") == 0);

    assert(change_name(s3, "Bob") == true);
    assert(strcmp(s3->name, "Bob") == 0);
    // ====================================

    // Free all dynamically allocated memory
    free_student(s1);
    free_student(s2);
    free_student(s3);

    // ====================================================
    // Automatic Testing on Codeforces (DO NOT CHANGE THIS)
    // If the tests don't pass, update your functions
    // ====================================================
    int id, namelen;
    scanf("%d", &id);
    scanf("%d", &namelen);
    char * sname = malloc(sizeof(char) * (namelen + 1));
    scanf("%s", sname);
    struct student * s = create_student(id, sname);
    free(sname);
    print_student(s);
    sname = malloc(sizeof(char) * (namelen + 1));
    scanf("%s", sname);
    change_name(s, sname);
    free(sname);
    print_student(s);
    free_student(s);
}