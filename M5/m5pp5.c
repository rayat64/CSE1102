#include<stdio.h>
void Binary(int n){

    if(n>1){
    Binary(n/2);}
    printf("%d", n%2);
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
