int main(){
    int basic;
    float hra,da,ma,pf,gross,net;
    printf("ENTER BASIC SALARY: ");
    scanf("%d",&basic);
    da=basic*1.2;
    hra=basic*0.2;
    ma=1200;
    pf=basic*0.1;
    gross=basic+hra+da+ma;
    net=gross-pf;
    printf("\n BASIC SALARY: %i \n",basic);
    printf("\n DA: %.2f \n",da);
    printf("\n HRA: %.2f \n",hra);
    printf("\n MA: %.2f \n",ma);
    printf("\n PF: %.2f \n",pf);
    printf("\n GROSS SALARY: %.2f \n",gross);
    printf("\n NET SALARY: %.2f \n",net);
}
