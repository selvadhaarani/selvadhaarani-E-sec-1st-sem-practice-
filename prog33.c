#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 if(num%5==0 && num%10==0)
 {printf("divisible by both 5 and 10");
 }
else
{
 printf("invalid no");
 }
 return 0;
 }
