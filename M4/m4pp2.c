#include<stdio.h>
int main()
{
    int ax[50], i, sum=0;
    for(int j=0; j<50; j++)
    {
    printf("Enter Mark for Student #%d: ", j+1);
    scanf("%d", &ax[j]);
    i =j;
    if (ax[j]<0)break;
    }
    int max = 0;
    for(int k =0; k<i; k++)
    {
        if(ax[k]>ax[max])
        {
            max=k;
        }
    }
    int min = 0;
    for(int k =0; k<i; k++)
    {
        if(ax[k]<ax[min])
        {
            min=k;
        }
    }
    for(int m=0; m<(i); m++){
        sum = sum + ax[m];
    }
    float avg = sum/(float)i;
    printf("Max. Marks=%d \n", ax[max] );
    printf("Min Marks: %d \n", ax[min]);
    printf("Average = %f", avg);

}