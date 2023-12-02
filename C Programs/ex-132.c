int main(){

   int no,prime=1,begin=2;

   for(no=2;no<=100;no++){
    prime=1,begin=2;
    while(begin<no/2){
        if(no%begin==0){
            prime=0;
        }
        begin++;
    }
    if(prime)
        printf("%d ",no);
   }
}
