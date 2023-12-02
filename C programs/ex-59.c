int main(){
    char ch;
    printf("Enter any Character to check it is vovel or not:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("\n%c is vovel\n",ch);
    }else{
           printf("\n%c is not vovel\n",ch);
       }
}
