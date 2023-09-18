#include <stdio.h>

int main (){

    int a ;
    printf("Enter any number: ");
    scanf("%d",&a);
    
    if(a % 97 == 0){
        printf("%d is divisble by 97", a);
    }
    else{
        printf("%d is not divisble by 97",a);
    }
return 0;
}