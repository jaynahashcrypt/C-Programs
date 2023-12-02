int main(){
    int m1,m2,m3,m4,m5,tot;
    float per;
    printf("Enter all 5 subjects of marks:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    tot=m1+m2+m3+m4+m5;
    per=tot /5.0;
    printf("\n total of 5 subjects %d \n",tot);
    printf("\n per of 5 subjects %.2f \n",per);

    if(per >= 90){
        printf("\ngrade A\n");
    }else if(per >= 80){
        printf("grade B\n");
    }else if(per >= 70){
        printf("grade C\n");
    }else if(per >= 60){
        printf("grade D\n");
    }else if(per >= 40){
        printf("grade E\n");
    }else
        printf("\ngrade F\n");



}
