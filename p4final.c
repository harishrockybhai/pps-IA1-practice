#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the array size :");
  scanf("%d", &a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  for (i=1; i<n; i++)
  {
    printf("enter the no :");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i,sum=0;
  for(i=1; i<n; i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int j;
  for(j=1; j<n; j++)
  {
    printf("%d +",a[j]);
  }
  printf("%d is %d", j ,sum);
}
int main()
{
  int n,a[n], sum;
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);

}