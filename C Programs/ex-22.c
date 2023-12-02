int main(){
    int sum=0,n;
    printf("ENTER ANY 3 DIGIT NUMBER:");
    scanf("%i",&n);
    while(n!=0){
    sum+= n%10;
    n=n/10;
    }
    printf("\n %i IS A SUM OF GIVEN DIGITS\n",sum);


}
