// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node *next;
// };
// void linkedlistTraversal(struct node* ptr){
//     while(ptr!=NULL){
//     printf("Element %d\n", ptr->data);
//     ptr = ptr->next;
//     }
// }

// // insertion at the beginning 
// struct node* insertatfirst(struct node *head, int data ){
//     struct node * ptr = (struct node*) malloc(sizeof(struct node ));
//   ptr->data = data;
//    ptr->next= head ;
//     return ptr;  
   
// }

// // insert in between
// struct node * insertatindex(struct node *head,int data,int index){
//     struct node * ptr = (struct node*)malloc(sizeof(struct node));
//     struct node *p = head;
//     int i=0;

//     while (i!=index-1){ // this loop is to placing the node between nodes like 2nd index ke pahle ye aayega 
//         p = p->next;
//         i++;
//     }
//     ptr -> data = data;
//     ptr -> next = p -> next;
//     p -> next = ptr ;
//     return head;
// }

// struct node * insertatend(struct node *head,int data){
//     struct node * ptr= (struct node*)malloc(sizeof(struct node*));
//     ptr -> data = data;
//     struct node *p = head;

//     while (p->next != NULL){
//         p = p->next;
//     }
//     p-> next = ptr;
//     ptr -> next = NULL;
    
//     return head;
// }

// int main(){
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;
    
//     // Allocate memory for nodes in the linked list in heap
//     head = (struct node* ) malloc(sizeof (struct node));
//     second = (struct node* ) malloc(sizeof (struct node));
//     third = (struct node* ) malloc(sizeof (struct node)); 
//     fourth = (struct node* ) malloc(sizeof (struct node)); 

//     // link first and second nodes 
//     head->data  = 7;
//     head->next = second ;

//     // link second and third 
//     second->data  = 11;
//     second->next = third; 

//     // link third and fourth nodes 
//     third->data  = 19;
//     third->next = fourth; 
    
//     // Terminate the list at the third node
//     fourth->data  = 66;
//     fourth->next = NULL ;
 
//     printf("original list\n");
//     linkedlistTraversal(head);

//     printf("\nafter insertion at first\n");
//     head = insertatfirst(head,56);
//     linkedlistTraversal(head);

//     printf("\nafter insertion at mid\n");
//     head = insertatindex(head,99,2);
//     linkedlistTraversal(head);

//     printf("\nafter insertion at end\n");
//     head = insertatend(head,32);
//     linkedlistTraversal(head);
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
        printf("element %d\n",ptr->data);
        ptr = ptr -> next;
    }
}

struct node *insertfirst(struct node *head, int data){
     struct node *ptr = (struct node*)malloc(sizeof(struct node));
     ptr -> next = head;
     ptr -> data = data;
     return ptr;     
}

struct node *inbet(struct node *head, int data, int index){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p =p ->next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p->next;
    p-> next = ptr;
    return head;
}

struct node inend(struct node *head,int data){
    struct node *ptr = (struct node)malloc(sizeof(struct node));
    ptr -> data = data;
    struct node *p = head;
    while(p->next = NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr -> next = NULL;
    return head;
}

int main (){
    struct node *head;
    struct node *second;
    struct node *third;
    
    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc ( sizeof(struct node));

    head -> data = 12;
    head -> next = second;

    second -> data = 56;
    second -> next = third;
    
    third -> data = 78;
    third -> next = NULL;
    printf("the original list: \n");
    listtraversal(head);

    printf("insertion at first: \n");
    head = insertfirst(head,45);
    listtraversal(head);

    printf("Insert at index: \n");
    head = inbet(head,90,2);
    listtraversal(head);
    return 0;
}

