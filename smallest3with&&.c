#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
{
printf("a is smallest\n");
}
else if(b<c)
{
printf("b is smallest");
}
else
{
printf("c is smallest");
}
}
