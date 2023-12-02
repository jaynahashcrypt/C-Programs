int main(){
     int ch;
     int i,j,space;

     do{
            system("cls");
         printf("===============================\n")   ;
         printf("\n1.patt1");
         printf("\n2.patt2");
         printf("\n3.patt3");
         printf("\n4.patt4");
         printf("\n5.patt5");
         printf("\n6.patt6");
         printf("\n7.patt7");
         printf("\n8.patt8");
         printf("\n9.patt9");
         printf("\n0.exit");
         printf("\n===============================\n")   ;
         printf("\n Enter choice : ");
         scanf("%d",&ch);
          printf("===============================\n")   ;

          switch(ch){
        case 1:
            for(i=1;i<=5;i++){
                for(j=1;j<=i;j++){
                    printf("* ");
                }printf("\n");
            }
            break;

            case 2:
                for(i=1;i<=5;i++){
                    for(space=i;space<=4;space++)
                    printf(" ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 3:
                for(i=1;i<=5;i++){
                    for(space=i;space<=4;space++)
                    printf("  ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 4:
                for(i=5;i>=1;i--){
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 5:
                for(i=5;i>=1;i--){
                    for(space=i;space<=4;space++)
                        printf(" ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 6:
                 for(i=5;i>=1;i--){
                    for(space=i;space<=4;space++)
                        printf("  ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 7:
                 for(i=1;i<=5;i++){
                    for(space=i;space<=4;space++)
                    printf(" ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }
               for(space=i;space<=4;space++)
                    printf("  ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
                for(i=5;i>=1;i--){
                    for(space=i;space<=4;space++)
                        printf(" ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }
                    for(space=i;space<=4;space++)
                        printf("  ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 8:
                for(i=1;i<=5;i++){
                for(j=1;j<=i;j++){
                    printf("* ");
                } for(space=i;space<=4;space++)
                        printf("    ");
                for(j=1;j<=i;j++){
                    printf("* ");
                }printf("\n");
            }
                for(i=5;i>=1;i--){
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }for(space=i;space<=4;space++)
                        printf("    ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;
            case 9:
                    for(i=1;i<=5;i++){
                    for(space=i;space<=4;space++)
                    printf("  ");
                    for(j=1;j<=i;j++){
                    printf("* ");
                    }
                    for(space=i;space<=4;space++)
                    printf("");
                    for(j=1;j<=i;j++){
                    printf("* ");
                    }printf("\n");
                    }
                for(i=5;i>=1;i--){
                        for(space=i;space<=4;space++)
                    printf("  ");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }for(space=i;space<=4;space++)
                        printf("");
                    for(j=1;j<=i;j++){
                        printf("* ");
                    }printf("\n");
                }
            break;

            case 0 :
                printf("Thanks");
                break;




          }








        printf("\n\n");
     system("pause");
     }while(ch!=0);





}
