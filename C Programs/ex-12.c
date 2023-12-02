int main(){
    float fah,cel;
    printf("ENTER TEMPERATURE OF PERSON IN FAHRENHEIT:");
    scanf("%f",&fah);
    cel=(fah-32)*5/9;
    printf("\n  TEMPERATURE OF PERSON IN CELSIUS : %.2f\n",cel);
}
