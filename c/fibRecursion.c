#include <stdio.h>

int terms;
int fib(int m, int n);

int main (){
    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d",&terms);
    printf("0 1 ");
    terms-=2;
    fib(0,1);
    printf("\n");
}

int fib(int m, int n){ 
    if (terms==0){
    return 0;
  }
    int sum=m+n;
    printf("%d ",sum);
    terms--;
    return sum+fib(n,sum);
}