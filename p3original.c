#include <stdio.h>

int input_n()
{
  int a;
  printf("Enter a number till which u want to calculate the sum :");
  scanf("%d",&a);
  return a;
}

int sum_n(int n)
{
  int a;
  a=(n*(n+1))/2;
  return a;
}

void output(int n, int sum)
{
  printf("1");
  for(int i=2;i<n;i++)
  {
    printf("+%d",i);
  }
  printf("+%d=%d",n,sum);
}

int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}