//MATRIX MULTIPLICATION.
#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("ENTER 1st matrix:");
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            printf("Enter A[%d]");
            scanf("%d",&A[i][j]);
        }

    }
    printf("\nThe matrix is:\n ");
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {

            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }



    int B[3][3],a,b;
    printf("ENTER 9 numbers:");

    for(a=0; a<3; ++a)
    {
        for(b=0; b<3; ++b)
        {

            printf("Enter B[%d]");
            scanf("%d",&B[a][b]);
        }

    }
        printf("\nThe matrix is:\n ");
        for(a=0; a<3; ++a)
        {
            for(b=0; b<3; ++b)
            {

                printf(" %d ",B[a][b]);
            }
            printf("\n");
        }




}



