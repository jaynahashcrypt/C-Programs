int main(){
    int no ,rem,sum=0,tmp;
    printf("Enter any number:");
    scanf("%d",&no);
    tmp=no;
    while(no!=0){
        rem=no%10;
        no=no/10;
        sum=sum +(rem *rem*rem);
    }
    if(sum == tmp){
        printf("\n%d is ARMSTRONG Number\n",tmp);
    }else{
        printf("\n%d is Not ARMSTRONG Number\n",tmp);
    }
}
