int main(){
    int no1,no2,lcm,gcd,min,i;

    printf("Enter any 2 Nos:");
    scanf("%d %d",&no1,&no2);

    if(no1 <no2)
        min=no1;
    else
        min=no2;

    for(i=1;i<=min/2;i++){
        if(no1%i==0 && no2%i==0){
            gcd=i;
        }
    }
    lcm = no1 * no2 / gcd;
    printf("Gcd=%d\n",gcd);
    printf("lcm=%d\n",lcm);

}
