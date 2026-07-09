#include<stdio.h>
int fact(int n){
    if (n==1 || n==0)return 1;
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int i, n, r, permutation, combination; 
    while(1)
    {
    printf("\n<----Menu---->\n");
    printf("    1. Permutation\n");
    printf("    2. Combination\n");
    printf("    3. Exit\n");
    printf("    Enter your option: ");
    scanf("%d", &i);
    if(i==3){printf("   End of Program \n");break;}
    printf("    Enter the values of n and r: ");
    scanf("%d %d", &n, &r);
    switch(i){
        case 1:{
            permutation=fact(n)/fact(n-r);
            printf("\nPermutaion: %d \n", permutation);
            break;
        }
        case 2:{
            combination=fact(n)/(fact(r)*fact(n-r));
            printf("\nCombination: %d \n", combination);
            break;
        }
        default:
            printf("Wrong Choice...Try again");
    }
    } //end of while loop

}