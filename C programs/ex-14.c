int main(){
    float inch,foot,cm;
    printf("ENTER HEIGHT OF PERSON (IN CEMI):");
    scanf("%f",&cm);
    inch=cm*0.3937;
    foot=cm*0.0328;
    printf("\nHEIGHT OF PERSON(IN CEMI)INTO INCH & FOOT : %.2f   %.2f \n",inch,foot);
}
