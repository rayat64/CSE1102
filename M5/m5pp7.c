#include<stdio.h>
int ax[50], bx[50];

void convarr(int a, int b){ 
    //converts the digits into array elements 
    int i=0;
    while(a>0){
    ax[i]=a%10;
    i = i+1;
    a = a/10;
    }
    i=0;
    while(b>0){
        bx[i]=b%10;
        i = i+1;
        b = b/10;
    }    

}

int counter(int n){
    int j=0;
    while(n>0){
        n = n/10;
        j = j+1;
    }
    return j;
}
int Anagram(int x, int y){
    int i, j, nx, ny;
    nx = counter(x);
    ny = counter(y);
    convarr(x, y);
    for(i=0; i<nx; i++){
        for(j=0; j<ny; j++)
        {
            if(ax[i]==bx[j]){
                break;
            }
        }
        if(j==ny)return 0;
    }
    return 1;


}
int main()
{
    int a, b;
    printf("Enter two numbers to check if anagram: ");
    scanf("%d %d", &b, &a);
//    printf("ag: %d", Anagram(a, b));
    if(Anagram(a, b))
        printf("%d and %d are Anagram\n",a ,b);
    else
        printf("%d and %d are NOT Anagram\n",a ,b); 
    printf("\n");
}