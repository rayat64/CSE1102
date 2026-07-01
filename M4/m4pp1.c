#include<stdio.h>
int main()
{
    int ax[5]={3, 4, 2, 7, 9};
    int i=0, s=0;
    while(i<5)
    {
        if(ax[i]%2)
            s=s+i;
        i++;

    }

    printf("%d", s);
    return 0;


}
