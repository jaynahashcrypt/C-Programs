int main(){
    int no,begin=2,prime=1;
    printf("Enter any number:");
    scanf("%d",&no);

    while(begin<=no/2){
            if(no%begin==0){
                prime=0;
            }begin++;
        }if(prime)
            printf("\n%d is prime \n",no);
            else
            printf("\n%d is not prime \n",no);
    }


