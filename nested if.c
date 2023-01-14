#include<stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
if(num%5==0)//outer if condition
{
if(num%8==0)//inner if
{
printf("Num is divisible by both 5 and 8\n");
}
else
{
printf("num is not divisible by 5 and 8\n");
}
}
else
{
printf(" num is not div by 5 and 8\n");
}

}
