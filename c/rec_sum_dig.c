#include<stdio.h>
int main(){
   printf("Enter a number to find the sum of its digits\n");
    int n;
    scanf("%d",&n);
    int sum= rec_sum(n);
    printf("The sum of the digits of %d is %d\n",n,sum);
    return 0;
}
int rec_sum(int n){
    if (n==0){
        return 0;
    }
    return n%10+rec_sum(n/10);
}