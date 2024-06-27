#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct llnode{
    int item;
    struct llnode * next;
};

void remove_dupes(struct llnode * head){
    while(head != NULL){
        struct llnode * prevnode = head;
        struct llnode * curnode = head->next;
        while(curnode != NULL){
            if(head->item == curnode->item){
                prevnode->next = curnode->next;
                free(curnode);
                curnode = prevnode->next;
            }else{
                prevnode = curnode;
                curnode = curnode->next;
            }
        }
        head = head->next;
    }
}

int main(){
    struct llnode * head = malloc(sizeof(struct llnode));
    struct llnode * a = malloc(sizeof(struct llnode));
    struct llnode * b = malloc(sizeof(struct llnode));
    struct llnode * c = malloc(sizeof(struct llnode));
    struct llnode * d = malloc(sizeof(struct llnode));

    head->item = 5;
    head->next = a;

    a->item = 4;
    a->next = b;

    b->item = 8;
    b->next = c;

    c->item = 4;
    c->next = d;

    d->item = 5;
    d->next = NULL;

    remove_dupes(head);

    while(head != NULL){
        printf("%d ", head->item);
        head = head->next;
    }
}