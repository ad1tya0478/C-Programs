#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enque(int x){
  if (rear == max - 1){
     printf("overflow\n",x); 
  } else if (front == -1 && rear == -1){
    front = rear = 0;
    queue[++rear] = x;
    printf("enqued %d\n",x);
  } 
}

void deque(){
  if (front == -1 && rear == -1){
    printf("underflow\n");
  } else if(front == rear){
    front = rear = -1;
  } else {
    printf("%d",queue[front]);
    front++;
     }
     printf("dequed %d\n",queue);
}

