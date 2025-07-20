// #include <stdio.h>
// int main(){
//     int n = 10, a = 0, b = 1 , c , i;
//     printf("%d %d ",a,b);
//     for(i=2;i<n;i++){
//         c = a + b;
//         printf("%d ",c);
//         a = b;
//         b = c;
//     }
//     printf("\nAditya Sharma\nBCAN1CA24013");
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

// Check if the deque is full
int isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

// Check if the deque is empty
int isEmpty() {
    return front == -1;
}

// Insert at the front
void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }
    deque[front] = value;
    printf("Inserted %d at front\n", value);
}

// Insert at the rear
void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = value;
    printf("Inserted %d at rear\n", value);
}

// Delete from the front
void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

// Display the deque
void display() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    printf("Aditya Sharma\nBCAN1CA24013\n\n");
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();
    deleteFront();
    display();
    insertFront(15);
    display();

    return 0;
}


