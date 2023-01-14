#include<stdio.h>
int main()
{
    int x=1,sum=0,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    while(x<=n)

    {
        sum=sum+x;
        x++;
    }
    printf("sum is %d",sum);
}
