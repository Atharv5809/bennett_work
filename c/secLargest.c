#include<stdio.h>
int main(){

    printf("Enter the size of the array:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    int max=-999;

    printf("Enter the array elements:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)max=arr[i];
    }
    printf("\n");

    int secondLargest=-999;
     for (int i=0; i<n; i++){      
        if(arr[i]==max)continue;
        else if (arr[i]>secondLargest)secondLargest=arr[i];
    }
    printf("The second largest element is %d\n",secondLargest); 
    return 0;
}