#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

struct llnode * adding_back(int i, struct llnode * ptr){
    struct llnode * newnode = malloc(sizeof(struct llnode));
    newnode->item = i;
    return newnode;
}


void linkedlist(struct llnode * node){
    while(node != NULL){
        printf("%d ", node->item);
        node = node->next;
    }
}

void remove_front(struct llist * lst){
    struct llnode * old_front = lst->front;
    lst->front = lst->front->next;
    free(old_front);
}

//bool remove_item(int i, struct llist * lst){
//    if(lst->front == NULL){
//        return false;
//    }
//    if(lst->front->item == i){
//        remove_front(lst);
//    }
//
//    struct llnode * before = lst->front;
//    while(i != before->next->item && before->next != NULL){
//        before = before->next;
//    }
//    if(before->next == NULL){
//        return false;
//    }
//
//    struct llnode * old_node = before->next;
//    before->next = old_node->next;
//    free(old_node);
//    return true;
//}

bool remove_item(int i, struct llist * lst){
        if(lst->front == NULL){
        return false;
    }
    if(lst->front->item == i){
        remove_front(lst);
        return true;
    }

    struct llnode * curnode = lst->front;
    struct llnode * temp = NULL;

    while(curnode != NULL){
        if(curnode->item == i){
//            curnode = temp->next;
            free(curnode);
            break;
        }
        temp = lst->front;
        curnode = curnode->next;
    }
    return true;

}

/*int main(){
    struct llist * lst = list_create();
    int n;
    scanf("%d", &n);
    struct llnode * curnode = lst->front;
    for(int i = 1; i <= n; i++){
        struct llnode * newnode = malloc(sizeof(struct llnode));
        newnode->item = i;
        if(lst->front == NULL){
            lst->front = newnode;
            curnode = lst->front;
        }
        curnode->next = newnode;
        curnode = curnode->next;
    }

    linkedlist(lst->front);
}*/

int main(){
    struct llist * lst = list_create();
    int n;
    scanf("%d", &n);
    struct llnode * curnode = lst->front;
    for(int i = 1; i <= n; i++){
        struct llnode * newnode = adding_back(i, lst);
        if(lst->front == NULL){
            lst->front = newnode;
            curnode = lst->front;
        }
        curnode->next = newnode;
        curnode = curnode->next;
    }

    remove_item(3, lst);
    remove_front(lst);

    linkedlist(lst->front);
}