#include <stdio.h>
#include <string.h>
int main (){
    struct book{
        char name[50];
        float price;
        int Numofpages;
    } a,b,c;

    a.Numofpages = 134;
    // a.name = "secret";
    strcpy(a.name,"Secret");
    a.price = 423.6;
    printf("%d %s %f\n",a.Numofpages, a.name,a.price);
    
    b.Numofpages = 114;
    // a.name = "secret";
    strcpy(b.name,"Modern");
    b.price = 783.6;
    printf("%d %s %f\n",b.Numofpages, b.name,b.price);
    return 0;
}