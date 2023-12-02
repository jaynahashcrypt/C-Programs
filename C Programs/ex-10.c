int main(){
    int p,n; //no of years;
    float r,interest;
    printf("ENTER AMT OF PRINCIPLE & RATE & NO OF YEARS :");
    scanf("%i %f %i",&p,&r,&n);
    interest=(p*r*n)/100;
    printf("\n SIMPLE INTEREST(BASED ON P*R*N/100)=%.2f \n",interest);


}
