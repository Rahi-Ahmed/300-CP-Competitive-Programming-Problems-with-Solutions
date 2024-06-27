#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct llnode{
    int item;
    struct llnode * next;
};

struct llist{
    struct llnode * front;
};

struct llist * list_create(void){
    struct llist * lst = malloc(sizeof(struct llist));
    lst->front  = NULL;
    return lst;
}

void adding_front(int i, struct llist * lst){
    struct llnode * newnode = malloc(sizeof(struct llnode));
    newnode->item = i;
    newnode->next = lst->front;
    lst->front = newnode;
}

void linkedlist(struct llnode * node){
    while(node != NULL){
        printf("%d ", node->item);
        node = node->next;
    }
}

void insert_node(int i, int value, struct llist * lst){
    if(i==0){
        adding_front(19, lst);
    }else{
        int position = 1;
        struct llnode * node = lst->front;
        while(node != NULL){
            if(position == i){
                break;
            }
            node = node->next;
            position++;
        }
        struct llnode * new_node = malloc(sizeof(struct llnode));
        new_node->item = value;
        new_node->next = node->next;
        node->next = new_node;
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

int main(){
    struct llist * lst = list_create();
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        adding_front(i, lst);
    }

    insert_node(1, 19, lst);

    linkedlist(lst->front);


    free_list(lst->front);
    free(lst);
}