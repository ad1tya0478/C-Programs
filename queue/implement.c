// #include <stdio.h>
// #define N 5
// int queue[N];
// int front =-1;
// int rear = -1;
// void enqueue(int x){
//     if(rear == N-1){
//         printf("overflow\n");
//     }
//     else if(front == -1 && rear == -1){
//         front = rear = 0;
//         queue[rear] = x;
//     }
//     else {
//         rear++;
//         queue[rear] = x;
//     }
//     return;
// }

// void dequeue(){
//     if(front == -1 && rear == -1){
//        printf("underflow\n"); 
//     }
//     else if(front == rear){
//         front = rear = -1;
//     }
//     else {
//         printf("dequed elements: %d\n",queue[front]);
//         front++;
//     }
//     return;
// }

// void display(){
//     while(front<=rear){
//         printf(" the elements: %d \n ",queue[front]);
//         front++;
//     }
//     return;
// }

// void peek(){
//     printf("first element: %d\n",queue[front]);
//     return;
// }

// int main (){
//     enqueue(2);
//     enqueue(5);
//     enqueue(7);
//     peek();
//     display();
//     dequeue();
//     peek();
//     display();
//     return 0;
// }




////////////// CIRCULAR /////////////////////////

