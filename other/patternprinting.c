#include <stdio.h>
int main(){

    // SOLID RECTANGLE :
    // int n, m;
    // printf("Enter num of lines : ");
    // scanf("%d",&n);
    // printf("Character each line : ");
    // scanf("%d",&m); 
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=m;j++){
    //         printf("*");
    //     } printf("\n");
    // }

    // Number square
    // int n, m;
    // printf("Number of rows : ");
    // scanf("%d",&n);
    // printf("Number of columns : ");
    // scanf("%d",&m); 
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=m;j++){
    //         printf("%d",j);
    //     } printf("\n");    
    // }

    //Pattern 1 :
    // *
    // * *
    // * * *
    // * * * *
    // int n;
    // printf("Enter num of rows : ");
    // scanf("%d",&n);
    // char c = '*';
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=i;j++){
    //         printf("%c ",c);
    //     } printf("\n");
    // }

    // Reverse triangle :
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // int n;
    // printf("Enter num of rows : ");
    // scanf("%d",&n);
    // char c = '*';
    // for(int i = 1; i<=n;i++){
    //     for(int j = n;j >= i;j--){
    //         printf("%c ",c);  
    //     } printf("\n");
    // }

    // Pattern 3 :
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // int n;
    // printf("Enter num of rows : ");
    // scanf("%d",&n);
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=i;j++){
    //         printf("%d ",j);
    //     } printf("\n");
    // }

    // Pattern 4 :
    // 1
    // 1 3
    // 1 3 5
    // 1 3 5 7
    // int n;
    // printf("Enter num of rows : ");
    // scanf("%d",&n);
    // for(int i = 1; i<=n;i++){
    //     int a = 1;
    //     for(int j = 1; j <= i;j++){
    //         printf("%d ",a);
    //         a = a + 2;
    //     } printf("\n");
    // }

    // Pattern 5 :
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    // int n,b;
    // printf("Enter a num : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     char x = 'A';
    //     for(int j = 1;j<=n;j++){
    //         printf("%c ",x);
    //         x = (int)x + 1;
    //     } printf("\n");
    // }

    // Pattern 6 :
    // A
    // A B
    // A B C
    // A B C D
    // int n,b;
    // printf("Enter a num : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     char x = 'A';
    //     for(int j = 1;j<=i;j++){
    //         printf("%c ",x);
    //         x = (int)x + 1;
    //     } printf("\n");
    // }

    // Pattern 7 :
    // 1
    // A B
    // 1 2 3
    // A B C D
    // 1 2 3 4 5
    // int n,b;
    // printf("Enter a num : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     char x = 'A';
    //     for(int j = 1;j<=i;j++){
    //         if(i%2==0){
    //             printf("%c ",x);
    //             x = (int)x + 1;
    //         } else if(i%2!=0){
    //             printf("%d ", j);
    //         }
    //     } printf("\n");
    // }    

    // Pattern 8 : -- ODD NUMBERS
    //     *
    //     *
    // * * * * *
    //     *
    //     *
    // int n;
    // printf("Enter a num : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n;j++){
    //         if(i == n/2 + 1 || j == n/2 + 1) printf("*");
    //         else printf(" ");
    //     } printf("\n");
    // }

    // Pattern 9 :
    // * * * * * *  
    // *         *  
    // *         *  
    // * * * * * *
    // int n,m;
    // printf("rows : ");
    // scanf("%d",&n);
    // printf("columns : ");
    // scanf("%d",&m);
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=m;j++){
    //         if(i==1 || j == 1 || i == n || j == m )printf("*");
    //         else printf(" ");
    //     } printf("\n");
    // }

    // Pattern 10 :
    // *       *
    //   *   *
    //     *
    //   *   *
    // *       *
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n;j++){
    //         if(i==j || i+j == n + 1) printf("*");
    //         else printf(" ");
    //     } printf("\n");
    // }

    // Pattern 11 :
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int n, a = 1;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         printf("%d ",a);
    //         a++;
    //     } printf("\n");
    // }

    // Pattern 12 :
    // 1
    // 3 5
    // 7 9 11
    // 13 15 17 19
    // int n,a=1;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         printf("%d ",a);
    //         a = a + 2;
    //     } printf("\n");
    // }

    // Pattern 13 :
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // int n,a;
    // printf("rows : ");
    // scanf("%d",&n);
    // Method 1 :
    // for(int i = 1;i<=n;i++){
    //       if(i%2!=0) a = 1;
    //       else a = 0;
    //     for(int j = 1;j<=i;j++){
    //       printf("%d ",a);
    //       if(a == 0) a = 1;
    //       else a = 0;
    //     } printf("\n");
    // }
    //Method 2 :
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         if((i+j)%2==0) printf("1 ");
    //         else if((i+j)%2!=0) printf("0 ");
    //     } printf("\n");
    // }

    // Pattern 14 :
    // # # # *             *
    // # # * *           * * 
    // # * * *  -->    * * *
    // * * * *       * * * *
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=i;k++){
    //         printf("*");
    //     } printf("\n");
    // }

    // Pattern 15 : RHOMBUS
    //    ****
    //   **** 
    //  ****  
    // ****   
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=n;k++){
    //         printf("*");
    //     } printf("\n");
    // }

    // Pattern 16 : Alphabet triangle
    //       A
    //     A B
    //   A B C
    // A B C D
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     char a = 'A';
    //     for(int k = 1;k<=n-i;k++){
    //         printf(" ");
    //     }
    //     for(int j = 1;j<=i;j++){
    //         printf("%c",a);
    //         a = (int)a + 1;
    //     } printf("\n");
    // }

    // Pattern 17 : STAR PYRAMID
    //       *
    //      * *
    //     * * *
    //    * * * * 
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);    
    // Method 1 :
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=2*i-1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // Method 2 :
    // int nst = 1;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=nst;k++){
    //         printf("*");
    //     }
    //     nst += 2;
    //     printf("\n");
    // }    

    // Pattern 18 :
    //       1
    //     1 2 3
    //   1 2 3 4 5
    // 1 2 3 4 5 6 7
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);    
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=2*i-1;k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

    // Pattern 19 :
    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);    
    // for(int i=1;i<=n;i++){
    //     for(int q=1;q<=n-i;q++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     for(int k=1;k<=i-1;k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

    // Pattern 20 :
    //       A
    //     A B A
    //   A B C B A
    // A B C D C B A
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     char c = 'A';
    //     for(int q=1;q<=n-i;q++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i;j++){
    //         printf("%c",c);
    //         c = (int)c + 1;
    //     }
    //     c = (int)c - 2;
    //     for(int k=1;k<=i-1;k++){
    //         printf("%c",c);
    //         c--;
    //     }
    //     printf("\n");
    // }

    // Pattern 21 :
    //       * 
    //     * * *
    //   * * * * *
    // * * * * * * *
    //   * * * * *
    //     * * * 
    //       * 
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // int nsp = n/2;
    // int nst = 1;
    // int middleLine = n/2 + 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nsp;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=nst;k++){
    //         printf("*");
    //     }
    //     if(i<middleLine){
    //         nsp--;
    //         nst+=2;
    //     }
    //     else{
    //         nsp++;
    //         nst-=2;
    //     } printf("\n");
    // }

    // Pattern 22 :
    // * * * *
    //   * * *
    //     * *
    //       *
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // for(int i=n;i>=1;i--){
    //     for(int k=1;k<=n-1;k++){
    //         printf(" ");
    //     }
    //     for(int j=i;j>=1;j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Pattern 23 :
    // * * * * * * *
    // * * *   * * *
    // * *       * *
    // *           *
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // int nst = n;
    // int nsp = 1;
    // for(int i=1;i<=2*n+1;i++){
    //     printf("*");
    // } printf("\n");
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nst;j++){
    //         printf("*");
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=nst;j++){
    //         printf("*");
    //     }
    //     nsp+=2;
    //     nst--;
    //     printf("\n");
    // }

    // Pattern 24 :
    // 1 2 3 4 5 6 7
    // 1 2 3   5 6 7
    // 1 2       6 7
    // 1           7
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // int nst = n;
    // int nsp = 1;
    // for(int i=1;i<=2*n+1;i++){
    //     printf("%d",i);
    // }printf("\n");
    // for(int i=1;i<=n;i++){
    //     int a = 1;
    //     for(int j=1;j<=nst;j++){
    //         printf("%d",a);
    //         a++;
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //         a++;
    //     } 
    //     for(int j=1;j<=nst;j++){
    //         printf("%d",a);
    //         a++;
    //     }
    //     nst--;
    //     nsp+=2;
    //     printf("\n");
    // }    

    // Pattern 25 :
    // A B C D E F G
    // A B C   E F G
    // A B       F G
    // A           G
    // int n;
    // printf("rows : ");
    // scanf("%d",&n);
    // int nst = n;
    // int nsp = 1;
    // char a = 'A';
    // for(int i=1;i<=2*n+1;i++){
    //     printf("%c",a);
    //     a = (int)a + 1;
    // } printf("\n");
    // for(int i=1;i<=n;i++){
    //     char a = 'A';
    //     for(int j=1;j<=nst;j++){
    //         printf("%c",a);
    //         a = (int)a + 1;
    //     }
    //     for(int k=1;k<=nsp;k++){
    //         printf(" ");
    //         a = (int)a + 1;
    //     } 
    //     for(int j=1;j<=nst;j++){
    //         printf("%c",a);
    //         a = (int)a + 1;
    //     }
    //     nst--;
    //     nsp+=2;
    //     printf("\n");
    // }

    // Pattern 26 :
    // 1 2 3 4 3 2 1
    // 1 2 3   3 2 1
    // 1 2       2 1
    // 1           1


    return 0;
}