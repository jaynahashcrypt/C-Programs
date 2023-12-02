int main(){
    int no;
    printf("Enter any number:");
    scanf("%d",&no);
    if(no%4==0 && no%11==0){
        printf("\n%d is divisible by 4 and 11 both\n",no);
    }else{
     printf("\n%d is not divisible by 4 and 11 both\n",no);
     }
}
