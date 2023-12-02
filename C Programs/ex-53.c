int main(){
    char ch;
    printf("Enter any charcter to check it is upper or lower case :");
    scanf("%c",&ch);
    if(ch >= 65 && ch <= 90){
        printf("\n %c is UPPER CASE\n",ch);
    }else if(ch >= 97 && ch <= 122){
        printf("\n %c is lower CASE\n",ch);
    }
}
