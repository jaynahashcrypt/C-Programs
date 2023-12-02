#include<stdio.h>
int main(){
    char gen;
    char name[20];
    printf("Enter your name:");
    scanf("%[^\n]s",&name);
    fflush(stdin);
    printf("Enter your gender:");
    scanf("%c",&gen);
    if(gen=='m' || gen=='M'){
        printf("\nWELCOME MR.%s \n",name);
    }else if(gen=='f' || gen=='F'){
        printf("\nWELCOME MRS.%s \n",name);
    }
}
