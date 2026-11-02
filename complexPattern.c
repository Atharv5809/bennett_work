#include <stdio.h>

int spacePatt(int rows){
    for(int i=1; i<=rows; i++){
        for (int j=1; j<=rows; j++){
            if (i==1 || j==1 || i==rows || j==rows){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int xpattern(int rows){
    for(int i=1; i<=rows; i++){
        for (int j=1; j<=rows; j++){
            if (j==i || i+j==rows+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int main(){
    printf("Give the number of rows for the patterns:\n");
    int rows;
    scanf("%d",&rows);
    spacePatt(rows);
    xpattern(rows);
    printf("\n");
    return 0;
}