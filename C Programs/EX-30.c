int main(){
    int amt,n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    printf("ENTER AMOUNT: ");
    scanf("%d",&amt);
    n2000=amt/2000;
    n500=amt%2000/500;
    n200=amt%2000%500/200;
    n100=amt%2000%500%200/100;
    n50=amt%2000%500%200%100/50;
    n20=amt%2000%500%200%100%50/20;
    n10=amt%2000%500%200%100%50%20/10;
    n5=amt%2000%500%200%100%50%20%10/5;
    n2=amt%2000%500%200%100%50%20%10%5/2;
    n1=amt%2000%500%200%100%50%20%10%5%2/1;
     printf("\n NOTES OF 2000  : %d\n",n2000);
     printf("\n NOTES OF 500  : %d\n",n500);
     printf("\n NOTES OF 200 : %d\n",n200);
     printf("\n NOTES OF 100 : %d\n",n100);
     printf("\n NOTES OF 50: %d\n",n50);
     printf("\n NOTES OF 20: %d\n",n20);
     printf("\n NOTES OF 10: %d\n",n10);
     printf("\n NOTES OF 5 : %d\n",n5);
     printf("\n NOTES OF 2 : %d\n",n2);
     printf("\n NOTES OF 1 : %d\n",n1);
}
