#include<stdio.h>
#include<math.h>
float Area(float x, float y, float z){
    float s, area;
    s = (x+y+z)/2;
    area = sqrt(s*(s-x)*(s-y)*(s-z));
    return area;
}

int main(){
    float i, j, k;
    printf("Enter the value of 3 sides of a triangle: ");
    scanf("%f %f %f", &i, &j, &k);
    printf("Area of the triangle=%f \n", Area(i, j, k));

}