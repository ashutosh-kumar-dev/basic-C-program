#include<stdio.h>
int main()
{
    int x=1,sum=0,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    while(x<=50)

    {
        if(x%2==0)
        sum=sum+x;
        x++;
    }
    printf("sum is %d",sum);
}
