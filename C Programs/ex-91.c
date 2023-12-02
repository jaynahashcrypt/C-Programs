int main(){
    int no=0,rev=0,rem,tmp,sum=0;
    printf("Enter Any no :");
    scanf("%d",&no);
    tmp=no;
    while(no!=0){
        rem=no%10;
        rev=(rev * 10)+rem;
        no=no/10;
    }
    printf("\n Original Number=%d\n",tmp);
     printf("\nReverse=%d\n",rev);
}
