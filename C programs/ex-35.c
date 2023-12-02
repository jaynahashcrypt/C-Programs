int main(){
    int no1,no2,no3,max;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&no1,&no2,&no3);
    if(no1 > no2 && no1 > no3){
        max=no1;
    }else if(no2>no1 && no2>no3){
        max=no2;
    }else{
        max=no3;
    }
    printf("\n%d is maximum number \n",max);
}
