// Q1----
// #include<stdio.h>
// int main (){
//     int n,m;
//     printf("enter n : ");
//     scanf("%d",&n);
//     printf("enter m : ");
//     scanf("%d",&m);
//     int sum;
//     sum = n + m;
//     printf("the sum of n and m is - %d",sum);
//     return 0;
// }

// // Q2------
// #include<stdio.h>
// int main(){
//     int b,h;
//     printf("enter b : ");
//     scanf("%d",&b);
//     printf("enter h : ");
//     scanf("%d",&h);
//     int area;
//     area = 0.5 * b * h;
//     printf("the area of triangle is - %d",area);
//     return 0;
// } 

// Q3-----------
// #include<stdio.h>
// int main(){
//     float n;
//     printf("enter a number - ");
//     scanf("%f",&n);
//     if (n>0){
//         printf("number is positive");
//     }
//     else if(n<0){
//         printf("number is negative");
//     }
//     else if(n=0){
//         printf("number is zero");
//     }
//     return 0;
// }


// Q4-----------
// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter n: ");
//     scanf("%d",&n);
//     printf("enter m: ");
//     scanf("%d",&m);
//     if(n>m){
//         printf("N is largest\n",n);
//         printf("M is smallest",m);
//     }
//     else if (m>n){
//         printf("M is largest\n",m);
//         printf("N is smallest",n);
//     }
//     return 0;
// }

//Q5-------------
// #include<stdio.h>
// int main(){
//     float kmeter=0,mile,n;
//     printf("enter kilometers - ");
//     scanf("%f",&kmeter);
//     mile = 0.6;
//     n = kmeter * mile;
//     printf("%.1f kilometers is equal to %.1f miles",kmeter,n);
//     return 0;        
// }

//Q6-----------
// #include<stdio.h>
// int main (){
//     char ch;
//     printf("enter a character -");
//     scanf("%c",&ch);
//     switch (ch){
//         case 'a':
//         printf("this is a vowel");
//         break;
//         case 'e':
//         printf("this is a vowel");
//         break;
//         case 'i':
//         printf("this is a vowel");
//         break;
//         case 'o':
//         printf("this is a vowel");
//         break;
//         case 'u':
//         printf("this is a vowel");
//         break;
//         default:
//         printf("this is consonant");
//     }
//     return 0;
// }

// Q7---------
// #include <stdio.h>
// int main(){
//     int n,m,result;
//     printf("enter the numberz - ");
//     scanf("%d",&n);
//     printf("enter the numberz 2 - ");
//     scanf("%d",&m);
//     char chr;
//     printf("enter one of these operators - *,/,+,- : ");
//     scanf(" %c",&chr);
//     switch(chr){
//         case '*':
//         result = n*m;
//         printf("multiplication of n and m is %d",result);
//         break;
//         case '-':
//         result = n-m;
//         printf("sub of n and m is %d",result);
//         break;
//         case '+':
//         result = n+m;
//         printf("sum of n and m is %d",result);
//         break;
//         case '/':
//         result = n/m;
//         printf("div of n and m is %d",result);
//         break;
//         default: printf("error: invalid operation");
//     }
//     return 0;
// }


//Q8-------------
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number - ");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){ 
//     printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// Q9------
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter a number - ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",i);
//         sum= sum +i;
//     }
//     printf("\nthe sum of first n natural numbers - %d",sum);
//     return 0;
// }

// Q10-----------
// #include<stdio.h>
// int main(){
//   int num;
//     printf("ENTER : ");
//     scanf("%d",&num);
//     int sum = 0;
//     while(num!=0){
//         sum = sum + num%10;
//         num = num/10;
//     }
//     printf("%d",sum);
//     return 0;
// }


//Q11-----------
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter - ");
//     scanf("%d",&num);
//     int rev=0;
//     while(num!=0){
//         rev = rev *10 + num%10;
//         num = num/10;
//     }
//     printf("%d",rev);
//     return 0;
// }


//Q12-----------
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter - ");
//     scanf("%d",&n);
//     int fact=0;
//     while (num!=0){
//         fact=fact*num;
//         num--;
//     }
//     printf("%d",fact);
//     return 0;
// }


// Q13--------
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter - ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         if(i%2==0) sum = sum + i;
//         else continue;
//     }
//     printf("%d",sum);
//     return 0;
// }

//Q14--------
#include<stdio.h>
int main(){
    int n=1,sum=0,b=1;
    printf("enter - ");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){                                    
        sum = n+b;
        n = b;
        b = sum;
    }
    printf("%d",sum);
    return 0;
}