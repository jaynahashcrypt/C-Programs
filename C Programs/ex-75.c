
int main(){
    int begin,end,count=0;
    printf("ENTER START AND END NUMBER:");
    scanf("%d %d",&begin,&end);
    while(begin <= end){
        if(begin%2!=0){
            count++;
        }
        begin++;
    }
    printf(" \n odd =%d\n",count);
}
