int main(){
    int no,begin=1;
    printf("Enter any no to Find Factors:");
    scanf("%d",&no);

    for(begin=1;begin<=no/2;begin++){
        if(no%begin==0){
            printf("%d ",begin);
        }
    }

}


