int main(){
    int mm,mp,mc,tot,tmp;
    printf("Enter marks obtained in maths: ");
    scanf("%d",&mm);
    printf("Enter marks obtained in physics: ");
    scanf("%d",&mp);
    printf("Enter marks obtained in chemistry: ");
    scanf("%d",&mc);
    tot=mm+mp+mc;
    tmp=mm+mp;
    if(mm >=65 && mp >=55 && mc >=50 && tot >=180 ||tmp>=140){
        printf("\n The Candidate is Eligible for admission \n");
    }else
        printf("\n not eligible");

}
