int main(){
    int begin=1,end;
    printf("ENTER END NUMBER:");
    scanf("%d",&end);
    while(begin<=end){
        printf("%d ",begin*begin*begin+begin);
        begin++;
    }
}
