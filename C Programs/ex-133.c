int main(){
    int no,n,begin=3,prime=1,div,count=0;
    printf("Enter Nth prime number:");
    scanf("%d",&n);
    for(no=3;no<1000;no++){

       prime=1;

       for(div=2;div<=no/2;div++) {
        if(no%div==0){
                    prime=0;
        }
       }
       if(prime){

    count++;
    if(count==n)
                printf("\n%dth Prime =%d\n",count,no);
       }
    }
//            if(no < no +1){
//            printf("%d ",no);
//
//        }
}
