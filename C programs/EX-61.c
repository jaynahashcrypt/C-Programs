int main(){
    int ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    switch(ch){
      case 'A': case 'a':
      case 'E' : case 'e':
      case 'I' : case 'i':
      case 'O' : case 'o':
      case 'U' : case 'u':
        printf("\n%c is vovel\n",ch);
        break;
        default:
        printf("\n%c is not vovel\n",ch);

    }
}
