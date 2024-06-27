#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct strnode {
    char str[5];            // String with at most 4 characters
    struct strnode * next;  // Pointer to next node in list
};


struct strnode * create_node(char str[], struct strnode * next) {
    struct strnode * node = malloc(sizeof(struct strnode));
    if (node == NULL) {
        return NULL;
    }
    strcpy(node->str, str);
    node->next = next;
    return node;
}


struct strnode * free_node(struct strnode * node) {
    struct strnode * next = NULL;
    if (node != NULL) {
        next = node->next;
        free(node);
    }
    return next;
}


void concat_nodes(struct strnode * head, char * str) {
    while (head != NULL) {
        printf("%s", head->str);
        if (head->next == NULL) {
            printf("\n");
        }else{
            printf("-");
        }
        head = head->next;
    }
}

int main() {
    struct strnode * head = NULL;
    struct strnode * current = NULL;
    char word[5];

    // Read words until "stop" is encountered
    while (scanf("%s", word) == 1 && strcmp(word, "stop") != 0) {
        struct strnode * new_node = create_node(word, NULL);
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = current->next;
        }
    }

    // Allocate memory for the string
    char * str = malloc(10000 * sizeof(char));
    if (str == NULL) {
        return (int) NULL;
    }
    str[0] = '\0'; // Ensure the string is empty initially

    // Concatenate nodes into the string
    concat_nodes(head, str);

    // Print the concatenated string
    //printf("%s\n", str);


    // Free dynamically allocated memory by using free_node in a loop
    while (head != NULL) {
        head = free_node(head);
    }

    // Free the string memory
    free(str);

    return 0;
}
