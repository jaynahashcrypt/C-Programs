int main(){
    int begin,end,sum=0;
    printf("ENTER START & END NUMBER:");
    scanf("%d %d",&begin,&end);
    while(begin<=end){
        printf("%d+ ",begin);
        sum=sum+begin;
        begin++;
    }
    printf("=%d",sum);
}
