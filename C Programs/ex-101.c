int main(){
    int no,last,first;
    printf("Enter Any Number:");
    scanf("%d",&no);

    last=no%10;
    first=no;

    for(;first >10;){
        first=first/10;
    }
    printf("\nFirst Digit =%d \nLast Digit =%d\n",first,last);

}

