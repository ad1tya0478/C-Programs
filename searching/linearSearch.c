// #include <stdio.h>

// int linearSearch(int arr[],int size, int element){
//     for(int i=0;i<size;i++){
//         if (arr[i]==element)
//         return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(arr)/sizeof(int);
//     int element;
//     printf("enter the element: ");
//     scanf("%d",&element);
//     int searchindex = linearSearch(arr,size,element);
//     printf("the element %d was found at index %d",element,searchindex);
//     return 0;
// }


#include <stdio.h>

int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("enter the element: ");
    scanf("%d",&element);
    int searchindex = linearsearch(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchindex);
}