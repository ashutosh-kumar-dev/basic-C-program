#include<stdio.h>
int main()
{
int i,n,r,sum;
for(i=100;i<=200;i++)// iterations
{
if (i%2==1)
{
n=i;
sum=0;
while(n!=0)// for calculating fac
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of %d is %d\n",i,sum);
}




}
}
