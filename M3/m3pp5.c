#include<stdio.h>
int main()
{
    int num, rem, s=0;
    printf("Enter your number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem = num%10;
        s = s*10 + rem;
        num = num/10;
    }
    printf("Reversed Number = %d \n", s);
    return 0;
}