#include <stdio.h>
int main()
{
  int sal;
  float bonus=0;
  printf("enter your salary");
  scanf("%d",&sal);
  
  if(sal<=10000)
  {
    bonus=sal*(30/100);
  }
  else if(sal>=10000 && sal<20000)
  {
    bonus=sal*(24/100);  
  }
  else if(sal>=20000 && sal<50000)
  {
    bonus=sal*(7/100); 
  }
  else
  {
    printf("No bouns ");
  }
  printf("\n salary is %d",sal);
  printf("\n bonus is %2f",bonus);
  return 0;
}