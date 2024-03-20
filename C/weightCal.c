#include<stdio.h>
#include<conio.h>

int main(){
  float i;
  printf ("enter your weight: ");
  scanf("%f",&i);
  
  if(i<15)
  {
    printf ("you are a starvation",i);
  }
  else if(i>15.1 && i<17.5)
  {
    printf ("you are a anorexic",i);
  }
  else if(i>17.6 && i<18.5)
  {
    printf ("you are a underweight",i);
  }
  else if(i>18.6 && i<24.9)
  {
    printf ("you are a ideal",i);
  }
  else if(i>25 && i<29.9)
  {
    printf ("you are a overweight",i);
  }
  else if(i>30 && i<30.9)
  {
    printf ("you are a obese",i);
  }
  else if(i>=40)
  {
    printf ("you are a moribidl obese",i);
  }
  return 0;
}