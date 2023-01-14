#include<stdio.h>
int main()
{
int a,b,sum,mul,sub;
char choice;
printf("Enter + for sum - forsub * for mul \n");
scanf("%d",&choice);
printf("Enter the value of a and b \n");
scanf("%d%d",&a,&b);

switch(choice)
{
case '+':
    sum=a+b;
    printf("sum is %d",sum);
    break;
case '-':
    sub=a-b;
    printf("sub is &d",sub);
    break;
case '*':
    mul=a*b;
    printf("mul is %d",mul);
    break;

default:
    printf("You have entered wrong input\n");
}
}
