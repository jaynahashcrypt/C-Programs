int main(){
    int amt,dis;
    printf("Enter Total Amount:");
    scanf("%d",&amt);
    if(amt <=1000){
        printf("%d",amt);
    }else if(amt >1000 && amt < 2000){
       dis=amt*5/100;
    }else if(amt >2001 && amt < 3000){
       dis=amt*10/100;
    }else if(amt >3001 && amt < 5000){
       dis=amt*15/100;
    }else if(amt > 5001){
       dis=amt*25/100;
    }

    printf("\n %d\n",amt-dis);
}

