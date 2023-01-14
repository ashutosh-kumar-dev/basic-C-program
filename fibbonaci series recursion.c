// to print fibanacci series upto n terms using recursion.
#include<stdio.h>
int fibb(int n);
int main()
{
    int n,f,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fibb(i);
        printf("%d ",f);
    }
}
int fibb(int n)
{
    if(n==1)// base cond
    return 0;
    else if(n==2)// base cond
    return 1;
    else
    return fibb(n-1)+fibb(n-2);// recursive
}
