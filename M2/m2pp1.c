#include<stdio.h>
int main()
{
    int a=2, b=3, s = 0;
    s = !!!!(a+1==b);
    if(s)
        printf("True \n");
    else
        printf("False \n");
}