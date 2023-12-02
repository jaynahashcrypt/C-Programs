int main(){
    int h,sec,m;
    printf("ENTER SECONDS TO CONVERT INTO HOUR,MINUTES,SECONDS : ");
    scanf("%i",&sec);
    h=sec/3600;
    m=sec%3600/60;
    sec=sec%3600%60;
    printf("\n %i  %i  %i ARE A HOUR,MINUTES,SECONDS \n",h,m,sec);
}
