#include<stdio.h>
int main()
{
    int x, r, n;
    for(;;)
    {
    printf("Enter your number: ");
    scanf("%d" , &x);
    r = x%10;
    if (x<1){printf("End of Program. Thanks for using :) \nffff  ");break;}
    while(x>0)
    {

        x = x/10;
        n = x%10;
        if (n==0)break;
        r = r*10 + n;


    }
    printf("The Reversed Number: %d \n", r);
}


    return 0;
}
