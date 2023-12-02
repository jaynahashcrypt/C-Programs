int main(){
    int no;
    printf("Enter any number:");
    scanf("%i",&no);
    if(no>0){
        printf("\n%i is positive number\n",no);
    }else if(no<0){
        printf("\n%i is nagative number\n",no);
    }else{
        printf("\n %i is zero\n",no);
    }
}
