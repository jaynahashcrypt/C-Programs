int main(){
    int temp;
    printf("Enter temperature in centigrade : ");
    scanf("%i",&temp);
    if(temp <= 0){
         printf("\nfreezing weather\n");
    } else if (temp <=10 ) {
        printf("\nvery cold weather\n");
        }else if(temp >= 11 && temp <20 ) {
        printf("\ncold weather\n");
        }else if (temp >=21 && temp <= 30) {
        printf("\nnormal in temp\n");
        }else if (temp >= 31 && temp <=40 ) {
        printf("\n hot weather\n");
        }else if (temp >=41 ) {
        printf("\nvery hot weather\n");
        }

}
