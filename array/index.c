#include <stdio.h>
int main(){
    int array[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter : ");
            scanf("%d",&array[i][j]);
        }
    }
    int max = array[0][0];
    int Rindex,Cindex;
    // int min = array[0][0];
    // max = 1;
    // 1 2
    // 4 3
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<=array[i][j]){
                max = array[i][j];
                Rindex = i;
                Cindex = j;
            }
            // if(min>=array[i][j]) min = array[i][j];
            // max = 3;
        }
    }
    printf("Max : %d\nAt index : [%d][%d]",max,Rindex,Cindex);
    return 0;
}