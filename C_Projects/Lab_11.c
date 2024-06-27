#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char s[20];
    struct node *next;
};

void linkedlist(struct node *ptr) {
    while (ptr != NULL) {
        printf("%s", ptr->s);
        if(ptr->next == NULL){
            printf("\n");
        }else{
            printf("-");
        }
        ptr = ptr->next;
    }
}

int main() {
    struct node *lst = NULL; // Changed from struct llist to struct node
    struct node *current = NULL;
    char c[20];

    while (scanf("%s", c) == 1) {
        if (strcmp(c, "stop") == 0) { // Corrected condition
            break;
        }
        struct node *new_node = malloc(sizeof(struct node));
        strcpy(new_node->s, c); // Corrected assignment
        new_node->next = NULL;
        if (lst == NULL) {
            lst = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = current->next;
        }
    }

    linkedlist(lst);

    // Free dynamically allocated memory
    while (lst != NULL) {
        struct node *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return 0;
}
