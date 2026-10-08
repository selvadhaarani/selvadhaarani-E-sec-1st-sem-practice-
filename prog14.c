#include<stdio.h>
int main()
{ 
int days;
printf("enter no:");
scanf("%d",&days);
printf("week=%d",days/7);
printf("remaining days=%d",days%7);
return 0;
}
