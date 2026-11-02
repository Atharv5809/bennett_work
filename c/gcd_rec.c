#include <stdio.h>

int largest=1;
//int recursion(int first,int second, int target);

int recursion(int first, int second,int target){
    if (target>first || target>second)
      return 1;
    if (first%target==0 && second%target==0)
        largest=target;

  return recursion(first,second,target+1);
}

int main(){
    printf("Enter two numbers to find their gcd:\n");
    int first,second;
    scanf("%d%d",&first,&second);
    recursion(first,second,2);
    printf("The gcd= %d\n",largest);
    return 0;
}