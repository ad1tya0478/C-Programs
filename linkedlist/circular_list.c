#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void list(struct node *head){
     struct node *ptr = head;
     printf("element is %d \n",ptr->data);
      ptr = ptr -> next;

     while(ptr!=head){
         printf("element is %d \n",ptr->data);
      ptr = ptr -> next;
     }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node ));
    second = (struct node*)malloc(sizeof(struct node ));
    third = (struct node*)malloc(sizeof(struct node ));

    head -> data = 78;
    head -> next = second;

    second -> data = 8;
    second -> next = third;

    third -> data = 7;
    third -> next = head;
    list(head);
    return 0;
}