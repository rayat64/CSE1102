#include<stdio.h>
int main()
{
    float cp, sp, percent;
    printf("Enter cost price:");
    scanf("%f", &cp);
    printf("Enter Selling price: ");
    scanf("%f", &sp);
    if((sp-cp)>0){
        percent = ((sp-cp)/cp)*100;
        printf("%.2f %% PROFIT\n", percent);
    }
    else{
        percent = ((cp-sp)/cp)*100;
        printf("%.2f %% LOSS\n", percent);
    }
}