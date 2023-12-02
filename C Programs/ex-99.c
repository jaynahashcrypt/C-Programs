int main(){
    int no,rev=0,rem,tmp;
    printf("Enter any no:");
    scanf("%d",&no);
    tmp=no;
    while(no!=0){
        rem=no%10;
        rev=(rev * 10) + rem;
        no=no/10;
    }
    printf("\nOriginal no = %d\n",tmp);
    printf("\n Reverse no = %d\n",rev);
    if(rev == tmp){
        printf("\n%d is Palindrome number\n",tmp);
    }else
    printf("\n%d is  Not Palindrome number\n",tmp);

}
