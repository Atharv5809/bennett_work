#include <stdio.h>

void square(int n);
void _square(int* n);

int main (){

   float price = 100.00;
   float *pointer = &price;
   float **dpointer = &pointer;
   printf ("%f %p %p\nOR\n",price,pointer,dpointer);  
   printf ("%f %u %u\n",price,pointer,dpointer);

   int number;
   printf("Enter any number:");
   scanf("%d",&number);

   square(number);
   printf("\nNumber= %d\n",number);

   _square(&number);
   printf("\nNumber= %d\n",number);
   return 0;

}

void square(int n){ //called by value
    n=n*n; //changes value of the square function variable 
    printf("Square= %d",n);
}

void _square(int* n){ //called by address
    *n=(*n)*(*n); //changes value at the given address throughout the code
    printf("Square= %d",*n);
}