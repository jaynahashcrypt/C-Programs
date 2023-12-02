int main(){
    int no;
    printf("Enter Any number:");
    scanf("%d",&no);
    if(no==0){
        printf("\nIt is Zero\n");
    return 0;
    }
    switch(no>0){
        case 1:
            printf("\n +%d is positive number \n",no);
        break;
        case 0:
            printf("\n %d is negative number \n",no);
        break;
        default:
            printf("\n %d is invalid character");
    }
}
