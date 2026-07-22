#include<stdio.h>
int main(){
    int next=0, first = 0, second = 1, n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    i = 0;
    while(i<n){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        i++;
    }
    printf("\n");
    return 0;

}