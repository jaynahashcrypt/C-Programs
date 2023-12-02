int main(){
    int no1,no2;
    char op;
    float ans;

    printf("Enter any 2 numbers & Operators(+ ,- ,*,/): ");
    scanf("%d %c %d",&no1,&op,&no2);
    switch(op){
        case '+':
            ans=no1+no2;
            break;
        case '-':
            ans=no1-no2;
            break;
        case '*':
            ans=no1*no2;
            break;
        case '/':
            ans=no1/no2;

    }


}
