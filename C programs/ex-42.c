int main(){
    char ch;
    printf("Enter one character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        ch=ch-32;
    }if(ch=='A'||ch=='E'||ch=='I'||
      ch=='O'||ch=='U'){
      printf("%c is vovel",ch);
      }else{
           printf("%c is consonent",ch);
      }
}
