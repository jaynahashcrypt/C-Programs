int main(){
    int begin,end;
    printf("ENTER START AND END NUMBER:");
    scanf("%d %d",&begin,&end);
    if(begin<=end){
        while(begin<=end){
            printf("%d ",begin++);
            }
    }else{
        while(begin>=end){
            printf("%d ",begin--);
        }
    }
}
