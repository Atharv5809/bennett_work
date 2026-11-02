int n;
int pow_calc(int num){
   if(n==1){
    return num;
   }
   n--;
   return num*pow_calc(num);
}
void main(){
   printf("Enter the number and the times of power you want of it:\n");
   int num,power;
   scanf("%d %d",&num,&power);
   n=power;
   printf("\n");
   printf("The calculated value of %d to the power %d is %d\n",num,power,pow_calc(num));

}