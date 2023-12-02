int main(){
    int m1,m2,m3,total;
    float per;
    printf("ENTER MARKS OF 3 SUBJECTS:");
    scanf("%i%i%i",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total /3.0;
    printf("\nTOTAL OF 3 SUBJECTS AND PERCENTAGE: %i  %.2f\n",total,per);


}
