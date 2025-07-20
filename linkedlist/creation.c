// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node* next;
// };
// int main(){
//     struct node *head;
//     struct node *second;
//     struct node *third;

//     // Allocate memory for nodes in the linked list in heap
//     head = (struct node* ) malloc(sizeof (struct node));
//     second = (struct node* ) malloc(sizeof (struct node));
//     third = (struct node* ) malloc(sizeof (struct node)); 
//     // link first and second nodes 
//     head->data  = 7;
//     head->next = second ;
//     // link second and third 
//     head->data  = 11;
//     head->next = third; 
//     // Terminate the list at the third node
//     head->data  = 66;
//     head->next = NULL ;
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void listtraversal(struct node *ptr){
     while(ptr!=NULL){
        printf("element %d\n ",ptr->data);
        ptr =  ptr -> next;
     }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node*));

    head -> data = 7;
    head -> next = second;

    second -> data = 34;
    second -> next = third;

    third -> data = 78;
    third -> next = NULL;
    listtraversal(head);
    return 0;
}


