#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of three angles \n");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
{
printf("triangle can made \n");
}

else
{
printf("triangle is not valid");
}
}
