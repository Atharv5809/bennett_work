void main(){
    printf("Enter you choice:\n1 for increasing-star pattern\n2 for decreasing star pattern\n");
    char choice;
    scanf("%c",&choice);
    printf("\n");
    printf("Enter the number of rows you want\n");
    int n;
    scanf("%d",&n);
    printf("\n");
    switch(choice){
        case '1': inc_star(n);
         break;
        case '2': dec_star(n);
         break;
        default: printf("Wrong choice of pattern\n");
         break;
    }   
}
void inc_star(int n){
  for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        printf("* ");
    }
    printf("\n");
  }
}
void dec_star(int n){
  for (int i=1; i<=n; i++){
    for (int j=1; j<=n-i+1; j++){
        printf("* ");
    }
    printf("\n");
  }
}