// #include <stdio.h>

// int binarysearch(int arr[], int size, int element){
//     int low,mid,high;
//     low = 0;
//     high = size-1;
//     // START SEARCHING 
//     while(low<=high){
//     mid = (low + high) / 2;
//     if (arr[mid]==element){
//         return mid;
//     }
//     if(arr[mid]<element){
//         low = mid + 1;
//     }
//     else{
//         high = mid - 1;
//     }
// } // ends
// return -1;

// }

// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16,18};
//     int size = sizeof(arr)/sizeof(int);
//     int element;
//     printf("enter the element: ");
//     scanf("%d",&element);
//     int searchindex = binarysearch(arr,size,element);
//     printf("the element %d was found at index %d",element,searchindex);
//     return 0;
// }


#include <stdio.h>

int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size -1;
    mid = (low + high) / 2;
    while(low<=high){
    if (arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
}
return -1;
}
int main(){
    int arr[] = {1,2,45,67,89,98,112,234,567};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("enter the element ");
    scanf("%d",&element);
    int searchindex = binarysearch(arr,size,element);
    printf("the element %d was found at index %d",element,searchindex);
    return 0;

}