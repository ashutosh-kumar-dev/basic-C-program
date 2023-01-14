#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of three sides \n");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
printf("it is equi. triangle \n");
}
else if(a==b || b==c || a==c)
{
printf("it is isosceles\n");
}
else
{
printf("it is scalen");
}
}
