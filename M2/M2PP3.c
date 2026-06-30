#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, x1, x2, dis;
	printf("enter values of a, b and c in ax^2 + bx + c = 0 ");
	scanf("%lf %lf %lf", &a, &b, &c);
	dis = sqrt((b*b)-(4*a*c));
	x1=((-b) + dis)/2*a;
	x2=((-b) - dis)/2*a;
	printf("\nThe two roots are %0.2lf and %0.2lf \n",x1, x2);
	return 0;
}
