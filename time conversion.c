#include<stdio.h>
int main()
{
  int hours,sec,min;
  printf("enter number of hours");
  scanf("%d",&hours);
  min=hours*60;
  sec=min*60;
  printf("%d%d",min,sec);
}
