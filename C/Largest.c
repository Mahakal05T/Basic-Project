#include <stdio.h>

int main (){
    int num1,num2,num3,num4;

    printf("enter four number: ");
    scanf("%d %d %d %d",&num1,&num2, &num3, &num4);

    if(num1 >= num2 && num1 >= num3 && num1 >= num4)
    {
        printf("%d this is largest number. ",num1);
    }
    if(num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("%d this is largest number. ",num2);
    }
    if(num3 >= num1 && num3 >= num2 && num3 >= num4)
    {
        printf("%d this is largest number. ",num3);
    }
    if(num4 >= num1 && num4 >= num2 && num4 >= num3)
    {
        printf("%d this is largest number. ",num4);
    }

    return 0;
}