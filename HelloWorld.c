#include <stdio.h>
int factorial(int num)
{
  if(num==1)
  return (1);
  else
  return(num*factorial(num-1));
}
int main()
{
  int x=5;
  printf("%d",factorial(x));
}