// #include <stdio.h>
// #define SIZE 5

// int queue[SIZE], front = -1, rear = -1;

// // Function to check if the queue is empty
// int isEmpty() {
//     return front == -1;
// }

// // Function to check if the queue is full
// int isFull() {
//     return rear == SIZE - 1;
// }

// // Function to add an element to the queue (Enqueue)
// void enqueue(int value) {
//     if (isFull()) {
//         printf("Queue is full. Cannot enqueue %d\n", value);
//     } else {
//         if (front == -1) front = 0;
//         queue[++rear] = value;
//         printf("Enqueued %d\n", value);
//     }
// }

// // Function to remove an element from the queue (Dequeue)
// void dequeue() {
//     if (isEmpty()) {
//         printf("Queue is empty. Cannot dequeue.\n");
//     } else {
//         printf("Dequeued %d\n", queue[front]);
//         if (front == rear) {
//             front = rear = -1; // Reset queue if last element is dequeued
//         } else {
//             front++;
//         }
//     }
// }

// // Function to display the queue
// void display() {
//     if (isEmpty()) {
//         printf("Queue is empty.\n");
//     } else {
//         printf("Queue elements: ");
//         for (int i = front; i <= rear; i++) {
//             printf("%d ", queue[i]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     display();
//     dequeue();
//     display();
//     enqueue(40);
//     enqueue(50);
//     enqueue(60);
//     display();
//     dequeue();
//     dequeue();
//     display();
//     return 0;
// }




////////// DOUBLE ENDED QUEUE //////////




// #include <stdio.h>
// #define SIZE 5

// int deque[SIZE], front = -1, rear = -1;

// // Function to check if the queue is empty
// int isEmpty() {
//     return front == -1;
// }

// // Function to check if the queue is full
// int isFull() {
//     return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
// }

// // Function to insert an element at the rear
// void insertRear(int value) {
//     if (isFull()) {
//         printf("Queue is full. Cannot insert %d at rear.\n", value);
//         return;
//     }
//     if (front == -1) {
//         front = rear = 0;
//     } else if (rear == SIZE - 1) {
//         rear = 0;
//     } else {
//         rear++;
//     }
//     deque[rear] = value;
//     printf("Inserted %d at rear\n", value);
// }

// // Function to delete an element from the front
// void deleteFront() {
//     if (isEmpty()) {
//         printf("Queue is empty. Cannot delete from front.\n");
//         return;
//     }
//     printf("Deleted %d from front\n", deque[front]);
//     if (front == rear) {
//         front = rear = -1; // Reset queue
//     } else if (front == SIZE - 1) {
//         front = 0;
//     } else {
//         front++;
//     }
// }

// int main() {
//     insertRear(10);
//     insertRear(20);
//     deleteFront();
//     return 0;
// }



////////// DOUBLE ENDED QUEUE WITH OTHER FUNCTIONS //////////////
// #include <stdio.h>
// #define SIZE 5

// int deque[SIZE], front = -1, rear = -1;

// // Function to check if the queue is empty
// int isEmpty() {
//     return front == -1;
// }

// // Function to check if the queue is full
// int isFull() {
//     return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
// }

// // Function to add an element at the rear (Enqueue)
// void insertRear(int value) {
//     if (isFull()) {
//         printf("Queue is full. Cannot insert %d\n", value);
//         return;
//     }
//     if (front == -1) {
//         front = rear = 0;
//     } else if (rear == SIZE - 1) {
//         rear = 0;
//     } else {
//         rear++;
//     }
//     deque[rear] = value;
//     printf("Inserted %d at rear\n", value);
// }

// // Function to delete an element from the front (Dequeue)
// void deleteFront() {
//     if (isEmpty()) {
//         printf("Queue is empty. Cannot delete from front.\n");
//         return;
//     }
//     printf("Deleted %d from front\n", deque[front]);
//     if (front == rear) {
//         front = rear = -1; // Reset queue
//     } else if (front == SIZE - 1) {
//         front = 0;
//     } else {
//         front++;
//     }
// }

// // Function to delete an element from the rear
// void deleteRear() {
//     if (isEmpty()) {
//         printf("Queue is empty. Cannot delete from rear.\n");
//         return;
//     }
//     printf("Deleted %d from rear\n", deque[rear]);
//     if (front == rear) {
//         front = rear = -1; // Reset queue
//     } else if (rear == 0) {
//         rear = SIZE - 1;
//     } else {
//         rear--;
//     }
// }

// // Function to display the queue
// void display() {
//     if (isEmpty()) {
//         printf("Queue is empty.\n");
//         return;
//     }
//     printf("Queue elements: ");
//     int i = front;
//     while (1) {
//         printf("%d ", deque[i]);
//         if (i == rear) break;
//         i = (i + 1) % SIZE;
//     }
//     printf("\n");
// }

// int main() {
//     insertRear(10);
//     insertRear(20);
//     insertRear(30);
//     display();
//     deleteFront();
//     display();
//     insertRear(40);
//     insertRear(50);
//     display();
//     deleteRear();
//     display();
//     return 0;
// }



//////// A SIMPLE DOUBLE ENDED IMPLEMENTATION //////////////
#include <stdio.h>
#define SIZE 5

int deque[SIZE], front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

int main() {
    printf("Double Ended Queue implemented.\n");
    return 0;
}



