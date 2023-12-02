
int main(){
    int no,sum=0,rem;
    printf("Enter any number: ");
    scanf("%d",&no);
    while(no!=0 ){

        rem = no % 10;
          if(no>0 && no<=9){
            printf("%i ",rem);

        }
        else {
            printf("%i+",rem);
        }
       sum=sum+rem;
       no = no /10;
} printf("=%i",sum);

  }

