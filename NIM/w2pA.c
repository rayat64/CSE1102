#include<stdio.h>
int main(){
    int x, i, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    i = x;
    while(x>0){
        sum = sum + (x%10);
        x = x/10;
    }
    printf("the sum of digits of %d is: %d \n", i, sum);
    return 0;
}