 int main(){
    char ch;
     printf("Enter any character:");
     scanf("%c",&ch);
     if(ch == 32){
        printf("\n you enter space\n");
     }else{
     if(ch >=65 && ch <= 122){
        printf("\n It Is Alphabet\n",ch);
     }else if(ch >=48 && ch <=57){
        printf("\n It Is Digit\n",ch);
     }else{
        printf("\n It Is Special character\n",ch);
    }
}
}
