#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void list(struct node *ptr){
    while(ptr!=NULL){
        printf("element: %d",ptr->data);
        ptr = ptr -> next;
    }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 90;
    head -> prev = NULL;
    head -> next = second;

    second -> data = 90;
    second -> prev = head;
    second -> next = second;

    third  -> data = 90;
    third -> prev = second;
    third  -> next = NULL;

    list(head);

    return 0;
}