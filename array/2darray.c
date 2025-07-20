// #include<stdio.h>
// int main(){
//     int arr[2][2] = {{1,2},{3,4}};
//     // arr[0][0]= 1;
//     // arr[0][1]= 2;
//     // arr[1][0]= 3;
//     // arr[1][1]= 4;
//     // 1 2
//     // 3 4 
//     for(int i =0; i<=1;i++){
//         for(int j = 0; j<=1;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the row - ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the column - ");
//     scanf("%d",&c);
//     int arr[r][c];
//     printf("enter the elements - \n");
//     for(int i =0; i<r;i++){
//         for(int j = 0; j<c;j++){
//            scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i =0; i<r;i++){
//         for(int j = 0; j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// QUE - WAP to store roll number and marks obtained by 4 students side by side in a matrix.
// #include<stdio.h>
// int main(){
//     int arr[4][2];
//     for(int i=0;i<4;i++){
//      for(int j=0;j<2;j++){
//         printf("elements - ");
//         scanf("%d",&arr[i][j]);
//      }  
//     }
//      for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             printf("elements in matrix[%d][%d] = %d ",i,j,arr[i][j]);
//         }
//      printf("\n");
//      }
    //     return 0;
// }

// QUE - WAP TO STORE 10 AT EVERY INDEX OF A 2D MATRIX WITH 5 ROWS AND 5 COLUMNS.
// #include<stdio.h>
// int main(){
//     int arr[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("elements - ");
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// QUE - WAP TO ADD TWO MATRICES.
// #include<stdio.h>
// int main(){
//     int a[2][2] = {1,2,3,4};
//     int b[2][2] = {5,6,7,8};
//     int res[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//            res[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// FIND THE SUM OF GIVEN MATRIX OF N x M.
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum = 0;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//          sum = sum + arr[i][j];
//         }
//     }
//     printf("the addition of thw whole matrix is %d",sum);
//     return 0;
// }

// QUE - Write a program to print the row number having the maximum sum in a given matrix.
// #include<stdio.h>
// int main(){
//       int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int maxsum=0;
//     int maxrowindex=0;
//     for(int i=0;i<r;i++){
//         int rowsum=0;
//         for(int j=0;j<c;j++){
//             rowsum = rowsum + arr[i][j];
//         }
//         if (i=0 || rowsum > maxsum){
//             maxsum = rowsum;
//             maxrowindex = i;
//         }
//     }
//     printf("the row with the maximum index is: %d \n",maxrowindex);
//     printf("maximux sum is: %d ",maxsum);
//     return 0;
// }

// QUE ----------
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int maxcount = 0;
//     for(int i=0;i<r;i++){
//         int count =0;
//         for(int j=0;j<c;j++){
//             if(arr[i][j]==1) count++;
//         }
//         if(maxcount<count){
//             maxcount = count;
//         }
//         printf("\n");
//     }
//     printf("%d",maxcount);
//     return 0;
// }

// QUE - Write a program to print the transpose of the matrix entered by the user- 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// transpose 
// 1 4 7 
// 2 5 8
// 3 6 9
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe Matrix that you created:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nThe Transpose of the matrix:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }    

// sum of upper triangle of the matrix --
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe Matrix that you created:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     } 
//     int sum = 0;
//     for(int i=0;i<r;i++){
//         for(int j=i;j<c;j++){
//             sum = sum + arr[i][j];
//         }
//         printf("\n");
//     } 
//     printf("%d ",sum);
//     return 0;
// }    

// SUM OF LOWER and UPPERboth TRIANGLE --
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows: ");
//     scanf("%d",&r);
//     int c;
//     printf("enter the columns: ");
//     scanf("%d",&c);
//     printf("enter all the elements:-\n");
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe Matrix that you created:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("the lower triangle of the matrix is:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int lower = 0;
//      for(int i=0;i<r;i++){
//         for(int j=0;j<=i;j++){
//             lower += arr[i][j];
//         }
//         printf("\n");
//     }
//     printf("the sum of lower triangle: %d\n",lower);
//     printf("\nthe upper triangle of the matrix is:\n");
    //     for(int i=0;i<r;i++){
//             for(int k=1;k<=i;k++){
//                 printf(" ");
//         }
//         for(int j=i;j<c;j++){
//             printf("%d",arr[i][j]);
//         } 
//         printf("\n");
//     }
//     int sum =0;
//     for(int i=0;i<r;i++){
//         for(int j=i;j<c;j++){
//             sum += arr[i][j];
//         }
//         printf("\n");
//     }
//     printf("the sum of the upper triangle is:%d\n",sum);
//     return 0;
// }    

//////////////////// DS FILE QUESTIONS /////////////////////

// Q.1--- Write a program to implement array and traverse all the elements of the
// array.
// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         printf("enter:");
//          scanf("%d",&arr[i]);
//         }
//     printf("\n");
//     for(int i=0;i<5;i++){
//             printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Q.2----Write a program to insert an element at Kth location of the array.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the no. of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n],a,k,el;
//     printf("enter elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the index: ");
//     scanf("%d",&k);
//     printf("enter the element: ");
//     scanf("%d",&el);
//     n++;
//     for(int i=n;i>k;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[k] = arr[el];
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n"); 
//     return 0;
// }

// TRAVERSE ALL THE ELEMENTS OF MULTIDIMENSIOL ARRAy
// #include <stdio.h>
// int main() {

// int matrix[2][2][2];

// for(int i=0;i<2;i++){
//    for(int j=0;j<2;j++){
//       for(int k=0;k<2;k++){
//          printf("enter : ");
//          scanf("%d",&matrix[i][j][k]);
//       }
//     }
//   }

// for(int i=0;i<2;i++){
//    for(int j=0;j<2;j++){
//       for(int k=0;k<2;k++){
//      printf("%d",matrix[i][j][k]);
//       } printf("\n");
//     }
//   }


// return 0;
// } 

