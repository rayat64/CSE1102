#include<stdio.h>
int main()
{
    int num, rem, s=0;
    while(1)
    {
        
    printf("Enter your number: ");
    scanf("%d", &num);
    if(num<0)break;
    while(num!=0)
    {
        rem = num%10;
        s = s*10 + rem;
        num = num/10;
    }
    printf("Reversed Number = %d \n", s);

}
    return 0;
}