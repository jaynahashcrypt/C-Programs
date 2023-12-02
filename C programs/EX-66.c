int main(){
     int year,days,mon;
     printf("Enter Month and Year:");
     scanf("%d %d",&mon,&year);
     switch(mon){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                printf("\ndays=31\n");
                break;
            case 2:
                if(year%400 == 0 && year%4==0 || year%100!=0){
                    printf("\nDays=29\n");
                }    else
                    printf("\nDays=28\n");

                break;
            case 4 : case 6:case 9:case 11:
                printf("\nDays=30\n");
                break;
     }
}
