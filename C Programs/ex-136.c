int main(){
    int row,col,space,ch,count=1,count1=97,count2=122;

    do{
        system("cls");
        printf("\nWelcome!!!...choose your pattern\n");
        printf("Enter any number to choice :");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            for(row=1;row<=5;row++){
                for(col=1;col<=row;col++)
                {
                    printf("* ");
                }printf("\n");
            }
            break;
     /*===================pattern=2======================*/
            case 2:
            for(row=1;row<=5;row++){
                for(space=row;space<=4;space++){
                    printf(" ");
                }
                for(col=1;col<=row;col++)
                {
                    printf("* ");
                }printf("\n");
            }
            break;
    /*===================pattern=3======================*/
            case 3 :
                for(row=1;row<=5;row++){
                    for(space=row;space<=4;space++){
                        printf("  ");
                    }
                    for(col=1;col<=row;col++)
                    {
                        printf("* ");
                    }printf("\n");
                }
            break;
    /*===================pattern=4======================*/

          case 4:
            for(row=5;row>=1;row--){
                for(col=1;col<=row;col++){
                    printf("* ");
                }printf("\n");
            }
            break;
      /*===================pattern=5======================*/
        case 5:
            for(row=5;row>=1;row--){
                for(space=row;space<=4;space++){
                    printf(" ");
                }
                for(col=1;col<=row;col++){
                    printf("* ");
                }printf("\n");
            }
            break;

        /*===================pattern=6======================*/
            case 6:
            for(row=5;row>=1;row--){
                for(space=row;space<=4;space++){
                    printf("  ");
                }
                for(col=1;col<=row;col++){
                    printf("* ");
                }printf("\n");
            }
            break;
        /*===================pattern=7======================*/

            case 7:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        printf("%d ",row);
                    }printf("\n");
                }
                break;

         /*===================pattern=8======================*/

            case 8:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        printf("%d ",col);
                    }printf("\n");
                }
                break;
         /*===================pattern=9======================*/

            case 9:
                for(row=5;row>=1;row--){
                    for(col=5;col>=row;col--){
                        printf("%d ",col);
                    }printf("\n");
                }
                break;
            /*===================pattern=10======================*/
            case 10:
                 for(row=1;row<=5;row++){
                    for(col=row;col>=1;col--){
                        printf("%d ",col);
                    }printf("\n");
                }
                 break;
              /*===================pattern=11======================*/
            case 11:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        printf("%d ",count);
                        count++;
                    }printf("\n");
                }
                break;
            /*===================pattern=12======================*/
            case 12:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        if(col == 1)
                            printf("1 ");
                        else
                            printf("0 ");
                    }
                printf("\n");
                }
                break;
        /*===================pattern=13======================*/
                 case 13:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        printf("%d ",count%2);
                        count++;
                    }printf("\n");
                }
                break;

         /*===================pattern=14======================*/
                 case 14:
                for(row=1;row<=5;row++){
                    for(col=1;col<=row;col++){
                        printf("%d ",col%2);
                    }printf("\n");
                }
                break;
          /*===================pattern=15======================*/
                 case 15:
                    for(row=97;row<=101;row++){
                        for(col=97;col<=row;col++){
                            printf("%c ",row);
                        }printf("\n");
                    }
                    break;
         /*===================pattern=16======================*/
                 case 16:
                     for(row=1,count1=97;row<=5;row++){
                        for(col=1;col<=row;col++){
                            printf("%c ",count1);
                            count1++;
                        }printf("\n");
                     }

                     break;
                /*===================pattern=17======================*/
                 case 17:
                     for(row=5,count2=122;row>=1;row--){
                        for(col=5;col>=row;col--){
                            printf("%c ",count2);
                            count2--;
                        }printf("\n");
                     }
                     break;
             /*===================pattern=18======================*/
                 case 18:
              for(row=5;row>=1;row--){
                for(col=row;col<=5;col++){
                        printf("%d ",col);

                    }printf("\n");
                }
                break;
        /*===================pattern=19======================*/
                 case 19:
            for(row=5;row>=1;row--){
                for(col=1;col<=row;col++){
                        printf("%d ",col);

                    }printf("\n");
                }
                break;
         /*===================0 to exit======================*/
            case 0:
                printf("Thanks\nByy");

            default :
                printf("invalid choice");




        }

        system("pause");
    }while(ch!=0);


}
