#include<stdio.h>
#include<math.h>
int main(){

    float p,n,r,ci;
    printf("Enter principal(p),rate(r),no of years(n):");
    scanf("%f %f %f",&p,&r,&n);
    ci= p * pow(1+(r/100),n);
   printf("compound interest is %.2f",ci);

}

    /*ci = p * pow(1+(r/100),n);*/
