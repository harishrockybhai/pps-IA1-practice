#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the array size :");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0; i<n; i++)
  {
    printf("enter the array numbers :");
    scanf("%d", &a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i, sum;

  for(i=0; i<n; i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n , int a[n], int sum)
{
  int j;
  for(j=0; j<n-1; j++)
  {
    printf("%d +",a[j]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int  n, a[n], sum;
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}
