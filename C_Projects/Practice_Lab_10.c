#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct strnode {
    char str[5];            // String with at most 4 characters
    struct strnode * next;  // Pointer to next node in list
};

struct strnode * create_node(char str[], struct strnode * next){
    struct strnode * newnode = malloc(sizeof(struct strnode));
    strcpy(newnode->str,str);

    newnode->next = next;

    return newnode;
}


int sumstrlen(struct strnode * node){
    int count  = 0;
    while(node != NULL){
        count ++;
        node = node->next;
    }
    return count;
}

int main(){

    char s[5];
    struct strnode * current = NULL;
    struct strnode * lst = NULL;
    while(scanf("%s", s)==1){
        if(strcmp(s, "stop") == 0){
            break;
        }
//        struct strnode * head = malloc(sizeof(struct strnode));
//        strcpy(head->str, s);
//        head->next = NULL;

        struct strnode * new_node = create_node(s, NULL);
        struct strnode * head = new_node;

        if (lst == NULL) {
            lst = head;
            current = head;
        } else {
            current->next = head;
            current = current->next;
        }
    }



   int c = sumstrlen(lst);

    printf("%d", c);

    return 0;
}