#include <stdio.h>
int main(){
    int n;
    int arr[] = {6,1,2,3,2,5,4};
    for(int i = 0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            printf("Duplicate element");
            break;
            } else{
                printf("No duplicate element");
                break;
            }
        }
    }
    return 0;
}
