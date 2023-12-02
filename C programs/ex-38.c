int main(){
    int no,rem,count=0;
    printf("Enter any no:");
    scanf("%d",&no);

        rem=no%10;
        if(rem==9){
            count++;
            no=no/10;
        }rem=no%10;
        if(rem==9){
            count++;
            no=no/10;
        }rem=no%10;
        if(rem==9){
            count++;
            no=no/10;
        }

        printf("%d are available in given number: ",count);
        }


