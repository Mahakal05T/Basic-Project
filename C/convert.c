#include <stdio.h>
#include <math.h>
int main (){
    float cel , far;
    printf("Enter degree in celcius: ");
    scanf("%f",&cel);

    far = ((cel*9)/5)+32;
    printf("\n%0.2f Celcius is %0.2f Fahrenheit",cel,far );
    
    return 0;
}