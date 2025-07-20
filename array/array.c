#include <stdio.h>
int main(){
    
    // Array structure.
    // int myNums[] = {1,2,3,4,5,6};
    // printf("VALUE AT FIRST INDEX : %d",myNums[0]);
    // myNums[0] = 50;
    // printf("\nUPDATED VALUE : %d",myNums[0]);
    // Array - Collection of elements of same data-types.
    /* For Example :
    *data type* numbers[] -- this is a array named `numbers` and it is denoted with `[]` this at the end.
    EG - 
    int numbers[] = {1,2,3,4};
    char str[] = {'A','B','C','D'};

    the elements of an array are accessed by their index-value. And the index starts at 0 for every array.
    for example - 
    int numbers[] = {1,2,3,4,5};
    printf("%d",numbers[0]); -- OUPUT :- 1
    `numbers[0]` will print the element at the 0th index of the array, which is the first element of the array.
    */

    // int myNums[] = {1,2,3,4,5,6};
    // int i;
    // for(i = 0; i < 6; i++){
    //     printf("%d\n",myNums[i]);
    // }
    // printf("Size of array : %lu\n",sizeof(myNums));
    // printf("Total elements : %d",sizeof(myNums)/sizeof(myNums[0]));
    
    // int myNums[] = {};
    // int myNums[4];
    // myNums[0] = 1;
    // myNums[1] = 2;
    // myNums[2] = 3;
    // printf("%d\n",myNums[0]);
    // printf("%d\n",myNums[1]);
    // printf("%d\n",myNums[2]);

    // Array Print
    // char radheMohan[] = {'T','E','R','E','N','A','A','M'};
    // for(int i = 0;i<sizeof(radheMohan)/sizeof(radheMohan[0]);i++){
    //     printf("%c\n",radheMohan[i]);
    // }

    // MY NAME :
    // char myName[] = {'A','n','i','r','u','d','h'};
    // for(int i = 0;i<sizeof(myName)/sizeof(myName[0]);i++){
    //     printf("%c",myName[i]);
    // }



    // To find the average of the elements of the array.
    // int myNums[] = {10,20,30,40,50};
    // int avg;
    // int sum = 0;
    // for(int i=0;i<sizeof(myNums)/sizeof(myNums[0]);i++){
    //     printf("%d",myNums[i]);
    //     sum = sum + myNums[i];
    //     printf("\n");
    // } 
    // printf("Sum of all the values of the array : %d",sum);
    // printf("\nTotal elements in array : %d",sizeof(myNums)/sizeof(myNums[0]));
    // avg = sum / (sizeof(myNums)/sizeof(myNums[0]));
    // printf("\nAverage : %d",avg);
    
    // To find if the element of a array is below zero
    // int n;
    // printf("enter elements of array : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int j=0;j<n;j++){
    //     printf("Enter %d element : ",j+1);
    //     scanf("%d",&arr[j]);
    // }
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     if(arr[i] <= 0) printf("Below Zero Number : %d\n", arr[i]);
    //     else printf("Above Zero number : %d\n",arr[i]);
    // }

    // Max
    // int n;
    // printf("enter elements of array : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int j=0;j<n;j++){
    //     printf("Enter %d element : ",j+1);
    //     scanf("%d",&arr[j]);
    // }
    // int a = arr[0];
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     if(a < arr[i]) a = arr[i];
    // } printf("%d is the greatest.", a);
    
    // Min
    // int arr[] = {1,2,15,40};
    // int a = arr[0];
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     if(a > arr[i]) a = arr[i];
    // } printf("%d is the Least.", a);

    // Check if the value is in the array or not :
    // int n,a=0;
    // printf("Search for the number : ");
    // scanf("%d",&n);
    // int nums[] = {1,2,3,4,5};
    // for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
    //     if(n == nums[i]){
    //         a = n;
    //     }
    // }
    // if(a == n) printf("%d is in the array!",n);
    // else printf("%d is not present in the array.",n);
    
    // If the element of an array is odd, then double it;
    // int n;
    // printf("enter elements of array : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int j=0;j<n;j++){
    //     printf("Enter %d element : ",j+1);
    //     scanf("%d",&arr[j]);
    // }
    // int sum;
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     if(arr[i]%2!=0){
    //         sum = arr[i] * 2;
    //         printf("%d",sum);
    //     } else continue;
    //     printf("\n");
    // }
    
    // DUPLICATE ELEMENT

    // Add Two Arrays.
    // int A[2][3];
    // int B[2][3];
    // int C[2][3];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("Enter A[%d][%d] : ",i,j);
    //         scanf("%d",&A[i][j]);
    //     } printf("\n");
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("Enter B[%d][%d] : ",i,j);
    //         scanf("%d",&B[i][j]);
    //     } printf("\n");
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         C[i][j] = A[i][j] + B[i][j];
    //         printf("%d|",C[i][j]);
    //    } printf("\n");
    // }

    return 0;
}