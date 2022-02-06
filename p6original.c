#include<stdio.h>
void input_two_strings(char *a, char *b)
{
  printf("enter the two strings");
  scanf("%s %s",a,b);
}
int strcmp(char *a, char *b)
{
  for(int i=0; a[i] == b[i] && a[i]!='\0'; i++)
  return a[i]-b[i];
}
void output(char *a, char *b, int result)
{
  if(result>0)
  {
  printf("%s is greater than %s",b,a);

  }
  else if(result<0)
  {
  printf("%s is lesser than %s",a,b);
  }
  else
  {
  printf("%s is equal to %s",a,b);
  }
}
int main()
{
  char a[10], b[20];
  input_two_strings(a,b);
  int result;
  result=strcmp(a,b);
  output(a,b,result);
  
}