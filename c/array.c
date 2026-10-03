#include <stdio.h>
int main(){
    printf("Enter the size of the array:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    printf("Enter the array elements:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    printf("\n");
    for (int i=0; i<n; i++){
        printf("%d\n",arr[i]);
        sum+=arr[i];
    }
    printf("Sum= %d\n",sum);
    return 0;
}