#include<stdio.h>
int main()
{
    int n, r, d, n_fact=1, r_fact=1, d_fact=1, choice, combination, permutation;
    while(1)
    {
    printf("Enter 1 for Combination \n");
    printf("Enter 2 for Permutation \n");
    printf("Enter -1 to Exit \n");
    scanf("%d", &choice);
    if (choice<0){printf("Thank you!\n");break;}
    else if(choice==1)
    {
        printf("Enter The values of n and r ");
        scanf("%d %d", &n, &r);
        n_fact=1;
        r_fact=1;
        d_fact=1;
        for(int i=1; i<=n; i++)
        {
            n_fact = n_fact*i;
        }
        for(int j = 1; j<=r; j++)
        {
            r_fact = r_fact*j;
        }
        d = n-r;
        for(int k =1; k<=d; k++)
        {
            d_fact= d_fact*k;
        }
        combination = n_fact/(r_fact*d_fact);
        printf("The combination of %dC%d is %d \n\n", n, r, combination);
        
    }
    else
    {
        printf("Enter The values of n and r \n");
        scanf("%d %d", &n, &r);
        n_fact=1;
        r_fact=1;
        d_fact=1;
        for(int i=1; i<=n; i++)
        {
            n_fact = n_fact*i;
        }
        d = n-r;
        for(int k =1; k<=d; k++)
        {
            d_fact= d_fact*k;
        }
        permutation = n_fact/(d_fact);
        printf("The permutation of %dP%d is %d \n\n", n, r, permutation);
    }
}
    return 0;

}