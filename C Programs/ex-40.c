#include<stdio.h>
int main(){
    int no1,no2;
    char ch;
    float result;
    printf("\n==========================\n");
    printf("\n 1.[ + ] ADDITION \n");
    printf("\n 2.[ - ] subtraction \n");
    printf("\n 3.[ * ] multiplication \n");
    printf("\n 4.[ / ] divison \n");
    printf("\n==========================\n");
    printf("\nEnter any 2 nos : ");
    scanf("%d %d",&no1,&no2);
    fflush(stdin);
    printf("\nEnter your choice of operators:");
    scanf("%c",&ch);
    if(ch=='+'){
        result=no1+no2;
    }else if(ch=='-'){
        result=no1-no2;
    }else if(ch=='*'){
        result=no1*no2;
    }else if(ch=='/'){
        result=no1/(float)no2;
    }printf("\nresult = %2.f\n",result);


}
