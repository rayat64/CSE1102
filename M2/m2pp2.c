#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a%5 == 0)
    printf("is divisible by 5");
    if(a%7==0)
    printf("is divisible by 7");
    else
    printf("indivisible");
    return 0;

}