#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct llnode{
    int item;
    struct llnode * next;
};



void linkedlist(struct llnode * node){
    while(node != NULL){
        printf("%d ", node->item);
        node = node->next;
    }
}

void free_list(struct llnode * head){
    struct llnode * temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}

void new_linkedlist(struct llnode * node){
    struct llnode * curnode = node;
    while(curnode!=NULL){
        struct llnode * new_node = malloc(sizeof(struct llnode));
        new_node->item = curnode->item;
        new_node->next = curnode->next;
        curnode->next = new_node;
        curnode = curnode->next->next;
        //printf("%d ", curnode->item);
    }

    while(node != NULL){
        printf("%d ", node->item);
        node = node->next;
    }
}

void remove_dupes(struct llnode * head){
    while(head != NULL){
        struct llnode * curnode = head->next;
        struct llnode * prev = head;
        while(curnode != NULL){
            if(curnode->item == head->item){
                prev->next = curnode->next;
                free(curnode);
                curnode = prev->next;
            }else{
                prev = prev->next;
                curnode = curnode->next;
            }
        }
        head = head->next;
    }

}



int main(){


    struct llnode * front = NULL;
    int values[5] = {6, 4, 7, 5, 7};

    const int n = 5;

    for(int i = 0; i < n; i++){
        struct llnode * newnode = malloc(sizeof(struct llnode));
        newnode->item = values[i];
        newnode->next = front;
        front = newnode;
    }

    linkedlist(front);
    printf("\n");
    new_linkedlist(front);
    printf("\n");
    remove_dupes(front);

    while(front != NULL){
        printf("%d ", front->item);
        front = front->next;
    }





    free_list(front);
}