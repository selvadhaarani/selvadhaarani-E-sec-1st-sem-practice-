#include<stdio.h>
int main()
{ 
int maths;
int physics;
int electronics;
printf("enter numbers:");
scanf("%d%d%d",&maths,&physics,&electronics);
printf("total=%d",maths+physics+electronics);
printf("avg=%d",maths+physics+electronics/3);
return 0;
}
