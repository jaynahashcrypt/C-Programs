int main(){
    int unit;
    float bill;
    printf("Enter electiricity unit : ");
    scanf("%d",&unit);

    if(unit <50){
        bill=unit*1.5;
    }else if((unit >=50) && (unit <150)){
        bill=(50*1.5)+(unit-50)*2.25;
    }else if(unit >=150&&unit <=250){
        bill=(50*1.5)+(100*2.25)+(unit-150)*2.80;
    }else if(unit >=250){
        bill=(50*1.5)+(100*2.25)+(100*2.8)+(unit-250)*3.5;

    }bill=bill*1.2;
    printf("\n TOTAL BILL IS %.2f\n",bill);
}
