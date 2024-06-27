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

struct llist * create_list(void){
    struct llist * lst = malloc(sizeof(struct llist));
    lst->front = NULL;
    return lst;
}

int main(){
    struct llist * lst = create_list();

    return 0;
}