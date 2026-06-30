#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float s, area;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c );
    s=(a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%0.2f \n", area);
    return 0;

}