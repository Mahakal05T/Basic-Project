#include <stdio.h>
int main(){
    int flag = 0, a,i;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i =2; i < a; i++){
        if(i!=a && a%i == 0){
        flag = 1;
        break;
    }
    else{
        continue;
    }
 }
if(flag == 0)
    printf("%d is a prime number.",a);
 
else
    printf("%d is not a prime number.",a);
 
}