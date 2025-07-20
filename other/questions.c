// #include<stdio.h>
// int main() {
    // int number, reversed = 0, remainder;

  
    // printf("Enter a number: ");
    // scanf("%d", &number);

   
    // while (number != 0) {
    //     remainder = number % 10;         
    //     reversed = reversed * 10 + remainder;  
    //     number /= 10;                
    // }

  
    // printf("The reverse of the number is: %d\n", reversed);

// ---------------------------------------------------------------------------

// int main(){
//     int n,sum=0;
//     printf("enter a number - ");
//     scanf("%d",&n);
//     for(int i =0;i<=n;i++){
//         if(i%2==0){
//             sum= sum+i;
//         }
//     }

//     printf("%d",sum);
//      return 0;
// }


#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the numbers - ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
       printf("%d ",i);
       if(i%2==0){
    sum=sum+i;
       }
    }
    printf(" sum - %d/n",sum);
    return 0;
}

