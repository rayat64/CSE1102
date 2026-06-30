#include<stdio.h>
int main()
{
    int a, b, c, d, max, max_2;
    printf("Enter 4 Numbers separated by spaces: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b)
    {
        if(a>c)
        {
            if(a<d)
            {
                max_2 = a;
            }
            else{
                max_2=d;
            }
        }
        else
        {
            if (c>d)
            {
                max_2 = d;
            }
            else{
                max_2=c;
            }
        }
    }
    else{
    if(b>c)
    {
        if(b>d)
        {
            max_2=d;
        }
        else{
            max_2=b;
        }

    }
    else
    {
        if(c>d)
        {
            max_2=d;
        }
        else{
            max_2=c;
        }
    }
    }
    printf("2nd Max is: %d \n", max_2);
}