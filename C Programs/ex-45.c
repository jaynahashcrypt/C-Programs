int main(){
    int cp,sp,pro,lo;
    printf("Enter Cost Price and Sell Price: ");
    scanf("%d %d",&cp,&sp);
    if(sp > cp){
        pro=sp-cp;
        printf("\nprofit = %d\n",pro);
    }
    else if(cp > sp){
        lo=cp-sp;
        printf("\n loss = %d\n",lo);
    }
}
