int main(){
    int d,y,w,m;
    printf("ENTER DAYS : ");
    scanf("%i",&d);
    y=d/365;
    m=d%365/30;
    w=d%365%30/7;
    d=d%365%30%7;
    printf("\n %i  %i  %i  %i  THIS ARE DAYS CONVERTED INTO YEAR,MONTH,WEEKS,DAYS \n",y,m,w,d);
}
