#include<stdio.h>
int main()
{
    int x,t,sum=0;
    printf("enter the value of n  \n");
    scanf("%d",&x);
    while(x!=0)

    {
        t=x%10;
        sum=sum+t;
        x=x/10;

    }
    printf("sum is %d",sum);

}
