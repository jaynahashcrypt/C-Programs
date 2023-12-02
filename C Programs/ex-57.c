int main(){
    float ha,car,ten;
    printf("Enter hardness,carbon,tensile:");
    scanf("%f %f %f",&ha,&car,&ten);
    if(ha >=50 && car <=0.7 && ten >=5500){
        printf("\n GRADE A\n");
    }else if(ha >=50 && car <=0.7){
        printf("\n GRADE B\n");
    }else if(car<=0.7 && ten >=5500){
        printf("\n GRADE C\n");
    }else if(ha >=50 && ten >=5500){
        printf("\n GRADE D\n");
    }else if(ha >=50|| car<=0.7 || ten >=5500){
        printf("\n GRADE E\n");
    }else
        printf("\n GRADE f\n");

}
