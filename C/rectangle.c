#include<stdio.h>
int main(){
    float area, l , b;

    printf("enter a lenght of rectangle");
    scanf("%f",&l);

    printf("enter width of rectangle");
    scanf("%f",&b);

    area=l*b;
    printf("area of a rectangle is: %.2f",area);

    return 0;
}