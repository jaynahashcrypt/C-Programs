int main(){
    int begin,end;
    char di;

    printf("ENTER STARTING &END NUMBER AND DIRECTION(MOD):");
    scanf("%d %d %c",&begin,&end,&di);
    if(begin>=end){
        printf("\n first no.must be smaller than second no \n");
    }else if(di=='f' || di=='F'){
            while(begin<=end){
            printf("%d ",begin);
            begin++;
            }
    }else if(di=='r' || di=='R'){
            while(end>=begin){
                printf("%d ",end);
                end--;
            }
    }else{
      printf(" \n DIRECTION MUST BE 'F' OR 'R' \n ");
      }

}
