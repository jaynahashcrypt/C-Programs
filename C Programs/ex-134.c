int main(){
   int no=0,count=0,sum=0,max=0,min=999999,smax,slast;
   float avg;
    while(no!=-1){
        printf("Enter Any Nos(-1 to exit):");
        scanf("%d",&no);
        if(no!=-1){
            sum=sum+no;
            count++;
            if(no < min){
            slast=min;
            min=no;
        }else if(no < slast){
        slast=no;}
    }if(no > max){
            smax=max;
            max=no;
        }else if(no > smax){
        smax=no;}
    }avg=sum /(float)count;
   printf("\n Count = %d",count);
   printf("\n Total sum = %d",sum);
   printf("\n Average = %.2f",avg);
   printf("\n Maximum = %d",max);
   printf("\n Second Maximum = %d",smax);
   printf("\n Minimum = %d",min);
   printf("\n Second Last = %d",slast);
}
