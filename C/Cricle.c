#include <stdio.h>
#include <math.h>
#define PI 3.142
int main(){
    float area , r;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    area = PI * r * r;

    printf("Area of a circle is: %2f",area);

    return 0;    
}