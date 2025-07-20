// A string is a comination of characters
// #include<stdio.h>
// int main(){
//     int a[4] = {1,2,3,4};
//     printf("%p\n",a[0]);
//     printf("%p\n",a[1]);
//     printf("%p\n",a[2]);
//     printf("%p\n",a[3]);
//     char arr[5] = {'a','d','i','t','y'};
//     printf("%c",arr[1]);
//     return 0;
// }

// the ASCII value of null character ('\0') is always 0.

#include<stdio.h>
int main(){
    char arr[] = "aditya sharma is studying at ITM\0";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}