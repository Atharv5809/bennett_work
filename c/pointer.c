//In lines 9 and 14- we can also use %d or %u to get somewhat understandalbe location.
//We primarily use %p and %u for the above. We can use %pointer to get location of location pointer.
#include <stdio.h>

int main(){ //Note- '*' represents value/pointer and '&' represents address.

    int age = 931;
    int *pointer = &age;   
    printf ("%d, %p\n",age,*pointer); //*pointer mean value of variable at 'pointer' address

    int arr[5]= {1,2,3,4,5};
    for (int i=0; i<5; i++){
        pointer = &arr[i];
        printf ("(%d %p), ",arr[i],pointer); //pointer with no * means address
    }
    printf ("\n");
    
    int newAge = 238;
    printf ("%p, %u, %d\n",&newAge,&newAge,newAge);
    printf ("%d\n",*(&newAge));
    return 0;
    
}  