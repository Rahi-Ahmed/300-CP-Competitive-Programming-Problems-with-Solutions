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

//int list_lenth(struct llnode * node){
//    //struct llnode * node = lst->front;
//    int len = 0;
//    while(node != NULL){
//        len++;
//        node = node->next;
//    }
//    return len;
//}

int list_lenth(struct llnode * node){
    if(node == NULL){ //base case
        return 0;
    }
    return 1 + list_lenth(node->next); // recursive case
}

int lenth(struct llist * lst){
    return list_lenth(lst->front); // recursive case
}


void destroy_node(struct llnode * head){
    struct llnode * temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}

void destroy_list(struct llist * node){
    struct llnode * temp = node->front;
    struct llnode * next_node = NULL;
    while(temp != NULL){
        next_node = temp->next;
        free(temp);
        temp = next_node;
    }
    free(node);
}

struct llnode * duplicating_list(struct llnode * node){
    if(node == NULL){
        return 0;
    }
    struct llnode * newnode = malloc(sizeof(struct llnode));
    newnode->item = node->item;
    newnode->next = duplicating_list(node->next);
    return newnode;

}

int main(){
    struct llist * lst = list_create();
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        adding_front(i, lst);
//        int j;
//        scanf("%d", &j);
//        adding_front(j, lst);
    }

    linkedlist(lst->front);
    printf("\n");
    int len = lenth(lst);
    printf("%d\n", len);

    struct llnode * new = duplicating_list(lst->front);

    while(new != NULL){
        printf("%d ", new->item);
        new = new->next;
    }

    //destroy_node(lst->front);
    //free(lst);

    destroy_list(lst);
}