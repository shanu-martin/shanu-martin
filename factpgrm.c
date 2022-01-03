#include<stdio.h>
void main()
{
  int i,n,fact=1;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    fact=fact*1;
  }
  printf("factorials = %d",fact);
  
}