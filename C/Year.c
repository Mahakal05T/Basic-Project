#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int y;
  printf("enter any year: ");
  scanf("%d",&y);
  
    if(y % 400 == 0){
      printf("%d this is leap year. ",y);
    }
    else if(y % 100 == 0)
    {
        printf("%d this is not leap year. ",y);
    }
    else if(y % 4 == 0)
    {
        printf("%d is a leap year. ",y);
    } 
    else
    {
        printf("%d this is not leap year. ",y);
    }
  
  return 0;
}