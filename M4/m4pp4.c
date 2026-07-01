#include<stdio.h>
int main()
{
    int ax[10], bx[10];
    for(int i=0; i<10; i++)
    {   
        printf("Enter Values of Array ax[%d]", i+1);
        scanf("%d", &ax[i]);
        bx[i]=0;
    }
    for(int j = 0; j<10; j++)
    {
        if((ax[j]%2)==0)
        {
            bx[j]=ax[j];
        }
    }
    for(int i=0; i<10;i++)
    {
        printf("%d   ", bx[i]);
    }
    printf("\n");


}