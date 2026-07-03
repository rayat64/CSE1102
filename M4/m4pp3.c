#include<stdio.h>
int main()
{
    int ax[5]={5,4,3,2,1}, t;
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5;j++){
            if(ax[i]>ax[j]) //use ax[i]<ax[j] to show descending order
            {
                t = ax[i];
                ax[i]=ax[j];
                ax[j]=t;
            }
    }
    }
    for(int i=0;i<5;i++ )
        printf("%d \n", ax[i]);


}