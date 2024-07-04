#include <stdio.h>

int main () {
    int num1 , num2;
    
    printf("Enter a first number ");
    scanf("%d",&num1);

    printf("Enter a second number ");
    scanf("%d",&num2);


    printf("------Before Swapping------\n");
    printf("First number %d \n",num1);
    printf("Second number %d \n",num2);

    // Without use third variable

    printf("------After Swapping------\n");
    printf("First number %d \n",num2);
    printf("Second number %d \n",num1);

}