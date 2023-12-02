int main(){
    int begin,end,sum;
    printf("ENTER START & END NUMBER:");
    scanf("%d %d",&begin,&end);

        while(begin<=end){
            if(begin%2==0){
        printf("%d+ ",begin);
        sum=sum+begin;
            }
        begin++;
        }
          printf("=%d",sum);

        }




