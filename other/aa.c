#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number - ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        if(i%2==0){
            sum= sum+i;
        }
    }
    printf("The sum of even numbers up to %d is: %d\n", n, sum);
    return 0;
}