#include<stdio.h>
#include<math.h>
float input()
{
  float a;
  printf("enter the square root of a number :");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  float x=n/4;
  float a;
 
  
  while(fabs(x-a)>0.000001)
  {
    x=a;
    a=0.5*(x+(n/x));
  }
  return x;

}
void output(float n, float sqrt_result)
{
  printf("square root of a no %f is %f",n,sqrt_result);
}
int main()
{
  float n ,sres;
  n=input();
  sres=my_sqrt(n);
  output(n,sres);
}