#include<stdio.h>
void Binary(int n){
    int i, j, k;
    i = n%2;
    if(n!=0)
    Binary(n/2);
    printf("%d", i);
}
int main(){
    int x, i;
    while(1){
    printf("Enter a number to convert it to binary (enter -1 to exit): ");
    scanf("%d", &x);
    if(x==-1){printf("End of Program \n");break;}
    Binary(x);
    printf("\n");
    }
}