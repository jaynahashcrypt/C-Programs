#include<stdio.h>
int main(){
    int no,tmp;
    printf("Enter any number: ");
    scanf("%d",&no);
    if(no == 0){
        printf("it is zero");
}else {
    tmp = no % 2 ;
    switch(tmp)
    {
    case 0:
        printf("\n%d is even number\n",no);
    break;
    case 1:
        printf("\n %d is odd number\n",no);
    break;
    default:
        printf("invalid no");
    }

}
    return 0;
}
