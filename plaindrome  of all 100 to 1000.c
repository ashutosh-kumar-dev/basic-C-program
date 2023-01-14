#include<stdio.h>
int main()
{
int i,n,r,rev;
for(i=100;i<=1000;i++)
{
    n=i;
    rev=0;
    while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
    if (rev==i)
    printf("%d\n",i);

}
}
