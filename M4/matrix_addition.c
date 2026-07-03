#include<stdio.h>
#include<math.h>
int main()
{
    int ax[3][3], bx[3][3], cx[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("Enter Values of Matrix A");
            scanf("%d", &ax[i][j]);

        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("Enter Values of Matrix B");
            scanf("%d", &bx[i][j]);

        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cx[i][j]=ax[i][j]+bx[i][j];
        }
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("    %d", cx[i][j]);
        }
        printf("\n");
    }
}
