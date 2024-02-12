#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

void printList(struct node*p){
    while(p != NULL){
        printf("%d",p->value);
        p = p -> next;
    }
}
int main(){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one -> value = 100;
    two -> value = 200;
    three -> value = 300;

    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    head = one;
    printList(head);
}
