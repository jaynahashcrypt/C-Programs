int main(){
    int no1,no2;
    printf("Enter no1 and no2: ");
    scanf("%d %d",&no1,&no2);

    if(no1%no2==0){
        printf("\n%d is divisible by %d\n",no1,no2);
    }else{
          printf("\n%d is not divisible by %d\n",no1,no2);
    }
}
