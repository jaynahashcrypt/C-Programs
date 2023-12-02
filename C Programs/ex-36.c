int main(){
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if(year%400==0 ||year%4==0 && year%100!=0 ){
        printf("\n%d year is leap year\n",year);
    }else{
        printf("\n%d year is not leap year\n",year);
    }
}
