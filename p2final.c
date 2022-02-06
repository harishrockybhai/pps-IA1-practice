#include<stdio.h>
int input()
{
  int a; 
  printf("enter the no :");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b)
  {
    if(a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else
  {
    if(b>c)
    {
      return b;
    }
    else
    {
      return c;
    }
  }
}
void output(int a, int b, int c , int largest)
{
  largest=cmp(a,b,c);
  printf("the largest among the three is %d",largest);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=cmp(x,y,z);
  output(x,y,z,large);
}