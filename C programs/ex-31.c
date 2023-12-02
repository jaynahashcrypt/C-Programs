int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf(" \ncongrats!you are eligible for voting \n");
    }else{
        printf("\noh!sorry, you will be eligible after %d years\n",18-age);
    }
}
