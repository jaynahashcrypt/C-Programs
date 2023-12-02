int main(){
    int mon,year,days=0;
    printf("Enter any year : ");
    scanf("%d",&year);
    printf("Enter any month_no : ");
    scanf("%d",&mon);
    if(mon==1 ||mon==3 ||mon==5||mon==7||mon==8||mon==10||mon==12)
        days=31;
    else if(mon==4||mon==6||mon==9||mon==11)
        days=30;
    else if(mon==2){
    if(year%400==0 ||(year%100!=0 && year%4==0))
        days=29;
       else
        days=28;
       }else{
       printf("\n%d is bogus month\n",mon);
       }
    printf("\n days in %d month of %d year is %d",mon,year,days);
}


