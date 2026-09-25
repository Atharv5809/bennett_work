#include <stdio.h>

int main(){
    printf("Enter the number of rows of the pattern:\n");
    int rows;
    int count=0;
    scanf("%d",&rows);
    for (int i=1; i<=rows; i++){
        for (int j=1; j<=rows*2-1; j++){
            if(j<rows-count || j>rows+count){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        count+=1;
        printf("\n");
    }
}

