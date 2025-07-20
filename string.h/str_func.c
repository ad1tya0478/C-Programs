#include <stdio.h>
#include <string.h>
int main(){
    printf("Aditya Sharma\nBCAN1CA24013\n");

    // STRING COPY FUNCTION
//     char src[] = "luffy";
//     char dest[20];
//     strcpy(dest,src);
//     printf("Source : %s\n",src);
//     printf("Destination : %s\n",dest);

    // STRING CAT FUNCTION
    // char str1[20] = "ITM";
    // char str2[20] = " University";
    // strcat(str1,str2);
    // printf("Concatenated String : %s\n",str1);

       // STRCMP Function 
    //    char str1[] = "Adi";
    //    char str2[] = "Sharma";
    //    int result = strcmp(str1,str2);
    //    if (result == 0){                ////// STILL ERROR
    //     printf("strings are equal");
    //    } else if (result < 0){
    //     printf(" '%s' is less than '%s', \n",str1,str2);
    //    } else {
    //     printf(" '%s' is greater than '%s'\n",str1,str2);
    //    }
      
       //  STRLEN Function
       char str[] = "Hello World!";
       printf("%s\n",str);
       printf("Length of the string is %lu\n",strlen(str));
    

    return 0;
}