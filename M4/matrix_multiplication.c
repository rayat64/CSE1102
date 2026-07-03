#include<stdio.h>
int main()
{
    int ax[3][3], bx[3][3], cx[3][3], i, j, k, sum =0;
    for(i=0; i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter values of matrix A: ");
            scanf("%d", &ax[i][j]);
        }
    }
    for(i=0; i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter values of matrix B: ");
            scanf("%d", &bx[i][j]);
        }
    }
    i=0;
    j=0;
    k=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum =0;
            for(k=0; k<3; k++)
            {
                sum =sum+ ax[i][k]*bx[k][j];
            }
            cx[i][j]=sum;
        }
        
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3;j++)
        {
            printf("%d ", cx[i][j]);
        }
        printf("\n");
    }

}