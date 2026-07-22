#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c>=65 && c<=90){
        printf("Capital Letter\n ");
    }
    else if(c>=97 && c<=122){
        printf("Small Letter\n");
    }
    else if(c>=48 && c<=57){
        printf("Numbers\n");
    }
    else{
        printf("Special Character\n");
    }
}