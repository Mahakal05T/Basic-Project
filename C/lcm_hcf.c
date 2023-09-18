#include <stdio.h>

int main()
{
  int a,b,t1,t2,lcm,hcf;
  printf("enter two number:");
  scanf("%d %d",&a,&b);
  t1=a;
  t2=b;
  while (t1 != t2)
  {
    if(t1 > t2)
    {
      t1 = t1-t2;
    }
    else
  {
    t2 = t2-t1;
  }
 }
 hcf=t1;
 lcm=(a*b)/hcf;
 printf("lcm=%d, hcf=%d",lcm,hcf);
  return 0;
}