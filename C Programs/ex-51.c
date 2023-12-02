int main(){
    int bs;
    float gs,hra,da,pf,ns;
    printf("Enter Basic salary: ");
    scanf("%d",&bs);
    if(bs <=1000){
        gs=bs+(hra=bs*0.2)+(da=bs*0.8);
    }else if(bs <=20000){
        gs=bs+(hra=bs*0.25)+(da=bs*0.9);
    }else if(bs >=21000){
        gs=bs+(hra=bs*0.3)+(da=bs*0.95);
    }
    ns=gs-pf;
    pf=gs*10/100;
    printf("\n  basic salary is %d",bs);
    printf("\n gross salary is %.2f",gs);
    printf("\nnet salary is %d.2f",ns);
}
