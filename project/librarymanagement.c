// #include <stdio.h>
// #include <string.h>

// // Struct is a type of user defined data type.
// // Not like arrays but function like array.

// // Collection of element of different data type.
// struct details{
//     char name[15]; //7
//     int age;
//     double mobNum;
// };

// struct details singleDetail[5]; // [0,1,2,3,4]
// // [1,2,3,4,5]



// int main(){

//     // singleDetail[0].name = "Anirudh";
//     strcpy(singleDetail[0].name, "Anirudh");
//     singleDetail[0].age = 18;
//     singleDetail[0].mobNum = 123456789;

//     // printf("%d",singleDetail[0].age);
//     printf("%s",singleDetail[0].name);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct book{
    int acc_Num;
    char title[50];
    int price;
    int copies;
};
struct book library[4];
int main(){
    for(int i=0;i<4;i++){
        char name[50];
        printf("Enter Name of the boook : ");
        scanf("%s",name);
        strcpy(library[i].title, name);
        printf("Enter Acession Number : ");
        scanf("%d",&library[i].acc_Num);
        printf("Enter Price : ");
        scanf("%d",&library[i].price);
        printf("Enter Number of copies : ");
        scanf("%d",&library[i].copies);
    }
    printf("\n");
    printf("--- LIBRARY CONTENTS ---");
    printf("\n");
    for(int i=0;i<4;i++){
        printf("Book Name : %s",library[i].title);
        printf("\nAccession Number : %d", library[i].acc_Num);
        printf("\nPrice : %d", library[i].price);
        printf("\nNo of Copies : %d", library[i].copies);
        printf("\n");
    }
    return 0;
}