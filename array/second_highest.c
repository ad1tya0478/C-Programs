#include <stdio.h>

int second_highest(int a[], int length);
int main (){
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int result = second_highest(a , 10);
    printf("Second Highest: %d\n",result);
    return 0;
}

int second_highest(int a[], int length){
    int max1;
    int max2;
    
    if(a[0] > a[1]){
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }
    for(int i = 2; i < length; i++){
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] < max1){
            max2 = a[i];
        }
    }
    return max2;
}