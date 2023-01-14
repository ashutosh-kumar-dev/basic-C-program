#include<stdio.h>
int main()
{
    int i,n,r,sum;
    for(i=100;i<=200;i++)
    {
        if (i%2!==0)
        {
        n=i;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        printf("sum of  %d is %d\n",i,sum);
        }

     }
}
