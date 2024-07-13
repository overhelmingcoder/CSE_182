#include<stdio.h>
int main()
{

    int r1,c1,r2,c2;

    printf("Enter row and column of 1st matrix numbers");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column of 2nd matrix numbers");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("matrix multiplication is not possible\n Try again:");
    }
    printf("Enter row and column of 1st matrix numbers");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column of 2nd matrix numbers");
    scanf("%d%d",&r2,&c2);


    int first[][10];
    printf("Enter elements:");
    int i,j;
    for(i=0;i<r1;++i)
    {

        for(j=0;j<c1;++j)
            {
             printf(" a%d%d",i+1,j+1) ;
             scanf("%d",first[i][j]);
            }
    }

     int second[][10];
    printf("Enter elements:");
    int i,j;
    for(i=0;i<r2;++i)
    {

        for(j=0;j<c2;++j)
            {
             printf(" a%d%d",i+1,j+1) ;
             scanf("%d",second[i][j]);
            }
    }





}
