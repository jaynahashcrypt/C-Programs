int main(){
    int ch;
    int no;
    do{
        system("cls");
        printf("===============================\n");
        printf("1.Find Square of No\n");
        printf("2.Find Cube of No\n");
        printf("3.Find Even or Odd No\n");
        printf("4.Find Prime No or Not\n");
        printf("5.Find Nth Prime No\n");
        printf("0.Exit\n");
        printf("===============================\n");
        printf("Enter Your choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;

        case 2:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;

        case 3:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;

        case 4:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;


         case 5:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;


         case 6:
            printf("Enter Any Number To Find Square:");
            scanf("%d",&no);
            printf("\n Square%d",no*no);
        break;

        case 0:
             printf("\n Thanks\nBye...");
        break;
        default:
            printf("\n Invalid Choice");

        }
        printf("\n\n");
      system("pause");

    }while(ch!=0);


}
