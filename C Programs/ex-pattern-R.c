
int main(){
    int row,col,space;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            if(col==1 ||  /*r*/
               (col==2 && (row==1 || row==3)) ||
               (col==3 &&(row==1 ||row==3 ||row==4)) ||
               (col==4 &&(row==1 ||row==3||row==5)) ||
               (col==5 && (row==1 ||row==2 ||row==3 ||row==5))
               )
               printf("* ");
            else
                printf("  ");

        }
        for (space=1;space<=3;space++)
        {
            printf (" ");
        }
        for(col=1;col<=5;col++)/*UU*/
        {
            if(col==1 || col==5 || row==5)
               printf("* ");
            else
                printf("  ");

        }
        for (space=1;space<=3;space++){
            printf(" ");
        }
        for(col=1;col<=5;col++)
            {
                if(col==1 || row==1 ||row==5)
                    printf("* ");
                else
                    printf("  ");
        }

        for(space=1;space<=3;space++){
            printf(" ");
        }
        for(col=1;col<=5;col++)
            {
                if(col==1 || col==5 || row==3)
                    printf("* ");
                else
                    printf("  ");
        }
        for(space=1;space<=3;space++){
            printf(" ");
        }
        for(col=1;col<=5;col++){
            if(row==1 || row==5 ||col==3)
                printf("* ");
            else
                printf("  ");

        }
        /*==================*/
         for(space=1;space<=3;space++){
            printf(" ");
        }
        for(col=1;col<=5;col++){
            if(row==1 || row==5 ||col==1||col==5)
                printf("* ");
            else
                printf("  ");

        }






        printf("\n");
    }
}
