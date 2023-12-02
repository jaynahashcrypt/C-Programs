int main(){
    int no,last,first,newno,count=1;
    printf("Enter Any Number:");
    scanf("%d",&no);
    last=no%10;
    first=no;

    for(;first>10;){
        count =count *10;
        first=first/10;
    }
    newno=(last * count) + first;
    newno+=(no-((first *count)+ last));
    printf("\nNew no=%d\n",newno);
}

