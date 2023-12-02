int main(){
    int no,rest,last;
    printf("ENTER ANY NUMBER:");
    scanf("%i",&no);
    last=no%10;
    rest=no/10;
    printf("\n%i IS A LAST DIGIT \n",last);
    printf("%i IS A REST DIGIT\n",rest);
}
