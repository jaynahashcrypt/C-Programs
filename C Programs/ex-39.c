#include<stdio.h>
int main(){
    int age,insured=0;
    char gen;
    char marital_status[10];
    printf("Enter driver's marital status: ");
    scanf("%s",&marital_status);
    fflush(stdin);
    printf("Enter driver's gender:");
    scanf("%c",&gen);
    fflush(stdin);
    printf("Enter driver's age:");
    scanf("%i",&age);
    if(stricmp(marital_status,"married")==0){
        insured=1;
    }else if(stricmp(marital_status,"unmarried")==0 ){
        if(gen=='m' && age>30)
            insured=1;
       else if(gen=='f'||gen=='F' && age>25)
            insured=1;
    }if(!insured){
        printf("driver is not insured ");
    }else{
     printf("\ndriver is insured \n");}
}

