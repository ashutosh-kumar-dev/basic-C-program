#include<stdio.h>
int main()
{
int i,n,r,sum;
for(i=100;i<=999;i++)
{
    n=i;
    sum=0;
    while(n!=0)
{
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
    if (sum==i)
    printf("armstrong is %d\n",sum);

}
}
