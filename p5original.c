#include <stdio.h>

float input()
{
  float f;
  printf("Enter the number for which you want to find the square root  :");
  scanf("%f",&f);
  return f;
}

float my_sqrt(float f)
{
  float a=f/2;
  float a2=f;
  while (a!=a2)
  {
    a2=a;
    a=(a+(f/a))/2;
  }
  return a;
}

void output(float n,float sqrt_result)
{
  printf("The square root of %f is %f",n,sqrt_result);
}

int main()
{
  float n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}