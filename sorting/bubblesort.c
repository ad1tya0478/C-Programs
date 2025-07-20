// #include <stdio.h>

// void printarray(int* A, int n){
//     for ( int i = 0;i< n;i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");
// }

// void bubblesort(int* A, int n){
//     int temp;
//     for ( int i=0;i<n;i++){ // for number of pass
//       for ( int j = 0;j<n-1-i;j++){  // for comparison in each pass
//         if (A[j]>A[j+1]){
//            temp = A[j];
//            A[j] = A[j+1];
//            A[j+1] = temp;
//         }
//       } // for comparison in each pass
//     }
// }

// int main(){
//     int A[] = {12,34,56,78,90,54,65,76};
//     int n = 8;
//     printarray(A,n);
//     bubblesort(A,n);
//     printarray(A,n);
//     return 0;
// }


#include <stdio.h>
void printarray(int *a,int n){
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
void bubblesort(int *a, int n){
  int temp;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;i++){
        if(a[j]>a[j+1]){
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
    }
  }
}
int main (){
  int a[] = {12,54,65,7,23,9};
  int n = 6;
  printarray(a,n);

  bubblesort(a,n);
  
  printarray(a,n);
  return 0;
}