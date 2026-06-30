#include<stdio.h>
int main()
{
    int x, i;
    printf("Enter a Number: ");
    scanf("%d", &x);
    for(i=2; i<=(x-1); i++)
    {
        if (x%i == 0)
        {
            printf("%d is not a prime number", x);
            return 0;
        }
    }
    printf("%d is a prime number", x);
    


    return 0;
}