#include <stdio.h>

int input()
{
  int a;
  printf("Enter how many numbers you want to calculate the sum : \n");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int *a)
{
  printf("Enter Numbers : \n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int n, int a[n], int sum)
{
  for (int i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d=%d",a[n-1],sum);
}

int main()
{
  int n,sum;
  n=input();
  int a[n];
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;
}