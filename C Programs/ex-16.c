int main(){
    float ns,ps,cs;
    float nb,pb,cb,total=0;
    printf("ENTER NO OF SUNFLOWER:");
    scanf("%f",&ns);
    printf("ENTER PRICE OF SUNFLOWER:");
    scanf("%f",&ps);
    printf("ENTER NO OF BILIPATRA:");
    scanf("%f",&nb);
    printf("ENTER PRICE OF BILIPATRA:");
    scanf("%f",&pb);

    cs=ns*ps ;
    cb=nb*pb;
    total=((cs+cb)*5 *30);
    printf("\n AMOUNT SPEND BY PERSONS = %.2f\n",total);
}
