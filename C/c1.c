#include <stdio.h>
#include <math.h>
#define Pi 3.142

int main (){
    float v , r , h;
    printf("\n enter radius: ");
    scanf("%f",&r);
    printf("\n enter height: ");
    scanf("%f",&h);

    v = Pi*r*r*h;
    printf("volume of cylinder: %0.2f",v);

    return 0;
}