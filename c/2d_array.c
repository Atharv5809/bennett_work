#include <stdio.h>
 int m,n;
 void transpose(int arr[m][n]);
int main(){
    printf("Enter the dimensions of the 2D array\n");   
    scanf("%d %d",&m,&n);
    printf("\n");
    int twoDarray[m][n];
    int sum=0;
    printf("Enter the 2D array elements:\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&twoDarray[i][j]);
            sum+=twoDarray[i][j];
        }
    }
    printf("\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ",twoDarray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    transpose(twoDarray);
    printf("The sum of all elements of the array= %d\n",sum);
    return 0;   
}
void transpose(int arr[m][n]){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}