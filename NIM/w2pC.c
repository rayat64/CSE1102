#include<stdio.h>
int main(){
    int n, flag=1, i, j;
    printf("enter value of n to find primes within: ");
    scanf("%d", &n);
    i = 0;
    while(i<n){
        for(j = 2; j<i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%d ", i);
        }
        flag =1 ;
        i++;
    }
}