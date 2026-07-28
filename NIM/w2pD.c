#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Using if-else: ");
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
    //using switch-case:
    printf("Using Switch-Case:");
    switch(c){
        case 'A'...'Z':{
            printf("Capital Letters:\n");
            break;}
        case 'a'...'z':{
            printf("Small Letters\n");
            break;}
        case '0'...'9':{
            printf("Numbers\n");
            break;}
        default:
            printf("Special Charecters\n");
    }
}