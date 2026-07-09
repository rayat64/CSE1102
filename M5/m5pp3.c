#include<stdio.h>
int check(int n){
    int i;
    if(n==2)return 1; 
    else if(n==1)return 0;

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int i; 
    printf("Enter -1 to exit \n");
    while(1){
    printf("Enter number to check: ");
    scanf("%d", &i);
    if(i<0){printf("End of program\n");break;}
    if(check(i))
    printf("%d is a prime number \n", i);
    else
    printf("%d is NOT a prime number \n", i);
    }//end of while loop
    return 0;
}