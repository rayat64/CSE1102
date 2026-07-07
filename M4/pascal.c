#include<stdio.h>
int main(){

    int A[20][20], n;
    for (int i = 0 ; i<20; i++)
    {
        for(int j =0; j<20; j++)
        {
            A[i][j]=0;
//            printf("%d ", A[i][j]);
        }
//        printf("\n");
    }
    printf("Enter the height of the Pascal's Triangle: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        A[i][0]=1;
    }

    for(int i = 1; i<n; i++)
    {
        for(int j=1; j<(i+1); j++)
        {
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }
    }
    for (int i = 0 ; i<n; i++)
    {
        for(int j =0; j<=i; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}
