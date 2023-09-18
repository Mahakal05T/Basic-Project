#include <stdio.h>
int main(){
    int sal;
    printf("enter your salary: ");
    scanf("%d",&sal);

    if(sal < 250000)
    {
        printf("\nYou don't have to pay tax in your salary: %d",sal);
    }
    else if(sal >= 250000 && sal <= 500000)
    {
        printf("\nYou have to pay 5 percent tax in your salary: %d",sal);
    }
    else if (sal >= 500000 && sal <= 1000000)
    {
        printf("\nYou have to pay 20 percent tax in your salary: %d",sal);
    }
    else if(sal >= 1000000){
        printf ("\nyou have to pay 30 percent tax in your salary: %d",sal);
    }
return 0 ;
}