int main(){
    int begin=0,n;
    printf("ENTER START AND END NUMBER:");
    scanf("%d",&n);
    while(begin<=n){
        printf("%d ",(begin*begin)+begin);
        begin++;
    }

}
