#include<stdio.h>
int input_n()
{
  int a; 
  printf("enter the array size : ");
  scanf("%d",&a);
  return a ;
}
int sum_n(int n)
{
  int i, sum=0;
  for(i=1; i<=n; i++)
  {
    sum= sum+i;
  }
  return sum;

}
void output(int n, int sum)
{
  int j;
  for(j=1; j<=n; j++)
  {
    printf("%d +",j);
    
  }
  printf("%d is %d",j,sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}