// FUNCTION - A block of code that performs specific tasks and can be called from anywhere in the program.

// A SIMPLE FUNCTION -----------

// #include<stdio.h>
// void adi(){
//     printf("aditya\n");
//     return;
// } 
// int main(){
//     adi(); // calling a function 
//     return 0;
// }

//  IF WE ADD A LOOP --------- 
//  int main(){
//     for(int i=0;i<=10;i++){
//         adi();
//     }
//     return 0;
//  } 

// D R Y -- Do not reapat youself

// MAIN FUNCTION IS ONLY USED ONE TIME --
// UNLIMITED FUNCTIONS WE CAN CREATE

// SUM OF TWO NUMBERS
// #include<stdio.h>
// void addition(){
//     int a;
//     printf("entre 1st number - ");
//     scanf("%d",&a);
//     int b;
//     printf("enter 2nd number - ");
//     scanf("%d",&b);
//     int sum = a + b;
//     printf("the sum of two numbers is %d",sum);
//     return;
// }
// int main(){
//     addition();
//     return 0;
// }
      // another way 
// #include<stdio.h>
// int main(){
// int add(int x, int y){
//     return x+y;
// }
//     int a,b;
//     printf("enter 1st number - ");
//     scanf("%d",&a);
//     printf("enter 2nd number - ");
//     scanf("%d",&b);
//     int sum;
//     sum = add(a,b);
//     printf("%d",sum);
//     return 0;
// }

// SQAURE ROOT OF A GIVEN NUMBER -----
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("enter a number - ");
//     scanf("%d",&a);
//     int root= sqrt(a);
//     printf("the sqaure root of the number is - %d",root);
//     return 0;
// }

// COMBINATION AND PERMUTATION --------
// nCr = n!/r!*(n-r)! ---
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);
//     int r;
//     printf("enter r : ");
//     scanf("%d",&r);
//     int nfact=1;
//     int rfact=1;
//     int nrfact=1;
//     for(int i=1;i<=n;i++ ){
//         nfact = nfact*i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact = rfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact = nrfact*i;
//     }
//     int ncr = nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }
///////////// BY USING FUNCTION ////////
#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter r: ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact= factorial(r);
    int nrfact= factorial(n-r);
    int ncr= nfact/(rfact*nrfact);
    return 0;
}
