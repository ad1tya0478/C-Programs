#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node* ptr){
    while(ptr!=NULL){
    printf("Element %d\n", ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct node* ) malloc(sizeof (struct node));
    second = (struct node* ) malloc(sizeof (struct node));
    third = (struct node* ) malloc(sizeof (struct node)); 
    fourth = (struct node* ) malloc(sizeof (struct node)); 

    // link first and second nodes 
    head->data  = 7;
    head->next = second ;

    // link second and third 
    second->data  = 11;
    second->next = third; 

    // link third and fourth nodes 
    third->data  = 19;
    third->next = fourth; 
    
    // Terminate the list at the third node
    fourth->data  = 66;
    fourth->next = NULL ;

    linkedlistTraversal(head);
    return 0;
}
