#include<stdio.h>
#include<math.h>
int main()
{
    /* my first program */
    float a, b, c, d, e, f, area ;
    printf("Enter Three Vertices \n");
    scanf("%f %f", &a, &b);
    scanf("%f %f", &c, &d);
    scanf("%f %f", &e, &f);
    area = 0.5*(a*d + c*f + e*b -b*c -d*e - f*a);
    area = fabs(area);
    printf("The area is: %f \n", area);
    return 0;



}
