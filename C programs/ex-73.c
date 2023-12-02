int main(){
    int begin,end;
    printf("ENTER START AND END NUMBER:");
    scanf("%d %d",&begin,&end);
    while(begin<end){
        if(begin%2==0){
            printf("%d ",begin);
            begin+=2;
        }else{
            begin++;
        }
    }
}
