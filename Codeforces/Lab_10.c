#include <stdio.h>
#include <stdlib.h>

struct llnode {
    int item;
    struct llnode * next;
};

struct llist {
    struct llnode * front;
};

// list_range(n, m) returns a new list containing the integers between
//   n and m (inclusive) in ascending order
// requires: n <= m
// note: caller must free allocated memory
struct llist * list_range(const int n, const int m) {
    struct llist * lst = malloc(sizeof(struct llist));
    lst->front = NULL;

    struct llnode * current = NULL;
    for (int i = n; i <= m; i++) {
        struct llnode * new_node = malloc(sizeof(struct llnode));
        new_node->item = i;
        new_node->next = NULL;

        if (lst->front == NULL) {
            lst->front = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = current->next;
        }
    }

    return lst;
}

// free_list(lst) frees all memory associated with list lst
void free_list(struct llist * lst) {
    struct llnode * current = lst->front;
    while (current != NULL) {
        struct llnode * temp = current;
        current = current->next;
        free(temp);
    }
    free(lst);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    struct llist * lst = list_range(n, m);

    struct llnode * current = lst->front;
    while (current != NULL) {
        printf("%d", current->item);
        if (current->next != NULL)
            printf(" ");
        current = current->next;
    }
    printf("\n");

    free_list(lst);

    return 0;
}
