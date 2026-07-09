#include<stdio.h>
int power(int x, int y){
    int i, p=1;
    for(i=1; i<=y; i++)
    {
        p = p*x;
    }
    return p;
}
int Armstrong(int n){
    int i, j, counter=0, sum =0;
    i = n;
    while(n>0){
        n = n/10;
        counter = counter+1;
    }
    while(i>0){
        j = i%10;
        sum = sum+power(j, counter);
        i = i/10;
    }
    return sum;
    
}
int main()
{
    int i, j;
    printf("Enter a value to check if it's Armstrong Number: ");
    scanf("%d", &i);
    if(Armstrong(i)==i)
        printf("%d is an Armstrong Number\n", i);
    else
        printf("%d is not an Armstrong Number\n", i);
    return 0;
}