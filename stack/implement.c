#include <stdio.h>
#define N 5
int stack [N];
int top = -1;
void push(int x){
    if(top==N-1){
        printf("overflow\n");
    }
    else {
        top++;
        stack[top] = x;
    }
    return;
}
void pop(){
    int item;
    if(top==-1){
        printf("underflow\n");
    }
    else {
        item = stack[top];
        top--;
        printf("%d ",item);
    }
    return;
}
void peek(){
    if(top==-1){
        printf("underflow\n");
    }
    else {
        printf(" top element %d \n",stack[top]);
    }
    return;
}

void display(){
    for(int i=top;i>=0;i--){
        printf(" the elements %d \n",stack[i]);
    }
    return;
}

int main (){
    push(5);
    push(9);
    pop();
    peek();
    display();
    return 0;
}