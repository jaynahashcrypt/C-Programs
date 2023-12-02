int main(){
    int fees,day;
    printf("Enter no of Days:");
    scanf("%d",&day);
    if(day >=1 && day<=5){
        printf("\n fees=%d\n",day*10);
    }else if(day >=6 && day<= 10){
        printf("\nfees=%d\n",(5*10)+(day-5)*50);
    }else if(day >=11 && day <=15){
        printf("\nfees=%d\n",(5*10)+(5*50)+((day-10)*100));
    }else if(day >=16 && day <=30){
        printf("\nfees=%d\n",(5*10)+(5*50)+(5*100)+((day-15)*200));
    }
    else if(day >=31){
        printf("\nMEMBERSHIP CANCELLED\n");
    }else
        printf("\ninvalid input\n");
}
