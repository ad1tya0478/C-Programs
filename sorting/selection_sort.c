#include <stdio.h>

void printarray(int *a,int n){
    for (int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionsort(int *a, int n){
    int indexofmin,temp;
     printf("running selection sort: ");
     for(int i=0;i<n-1;i++){
        indexofmin = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[indexofmin]){
                indexofmin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
     }
}

int main (){
    int a[] = {3, 2, 5, 4, 6, 7};
    int n=6;

    printarray(a,n);
    selectionsort(a,n);
    printf("\n");
    printarray(a,n);
    return 0;
}