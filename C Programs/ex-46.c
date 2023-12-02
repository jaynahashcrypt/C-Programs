int main(){
    int m1,m2,m3,m4,m5,count=0;
    printf("Enter all 5 Subjects Marks:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=40){
        count++;
    }if(m2>=40){
            count++;
    }if(m3>=40){
            count++;
    }if(m4>=40){
            count++;
    }if(m5>=40){
            count++;
    } if(count == 5) {
        printf("Congrats! you are pass");
    }else if(count >=3){
        printf("oh! sorry you got Atkt");
    }else{
        printf("fail");
    }


}
