#include<stdio.h>  
int main()    
{    
 int n, i,fact=1;  
 printf("Enter the number: ");
 scanf("%d",&n);

 if(n < 0){
    printf("\nFactorial of a negative number is not defined");
 }
else{
    for(i=1;i<=n;i++){    
      fact=fact*i;    
   }    
   printf("Factorial of %d = %d ", n,fact);  
}  
return 0;  
}   