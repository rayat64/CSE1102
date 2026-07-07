#include<stdio.h>
int main()
{
    int i, j, k, t;
    int ax[100]={
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };



    //shifting the values to the left
    //ax[3]=0;

    for(i=3; i<100; i++){ 
        t=ax[i+1];
        ax[i]=t;       
    }
    for(j=0; j<99; j++)
    {
        printf("%2d ", ax[j]);
    }
    printf("\n");
    
    //shifting elements to the right
    printf("Enter a value to put in index 5: ");
    scanf("%d", &k);
    t=0;
    for(i=98; i>=5; i--)
    {
        ax[i+1]=ax[i];

    }
    ax[5]=k;
    for(i=0; i<100; i++){
        printf("%d ", ax[i]);
    }
    printf("\n");



    
}