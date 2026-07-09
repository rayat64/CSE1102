#include<stdio.h>
int Big(int x, int y){
    if(x>y)return 1;
    else return 0;
}
int main(){
    int ax[10], i,max;
    for(i=0; i<10; i++){
        printf("Enter value in index %d: ", i+1);
        scanf("%d", &ax[i]);
    }
    max=ax[0];
    for(i=0; i<10; i++){
        if(Big(ax[i], max))
        {
            max=ax[i];
        }
    }
    printf("The largest value in the array is: %d\n", max);
}