#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("input 10 elements\n");

    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        if (a[i]%2==0)
        {
             sum=sum+a[i];
        }
    }
    printf("sum of Array elements are%d ",sum);
}

