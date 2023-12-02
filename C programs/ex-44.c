int main(){
    int no;
    printf("Enter any Month Number: ");
    scanf("%i",&no);
    if(no==1 || no==3|| no== 5|| no== 7||no== 8||no== 10||no== 12){
        printf("\n %d having 31 DAYS",no);
    }
        else if(no==2){
            printf("\n 28 DAYS");
        }
        else if(no==4|| no== 6|| no==9 || no== 11){
                printf("\n 30 DAYS");
        }
        else
            printf("invalid month number");

}
