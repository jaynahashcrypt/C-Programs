int main(){
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if(ch >=65 && ch <=90){
        printf("\n%c is Upper case \n",ch);
        ch=ch+32;
        printf("\n%c is now convert into Lower case \n",ch);
    }else if(ch >=97 && ch <=122){
         printf("\n%c is LOWER case \n",ch);
          ch=ch-32;
         printf("\n%c is now convert into UPPER case \n",ch);
         }
}
