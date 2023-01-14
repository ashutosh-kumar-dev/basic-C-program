#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);// fn call
    printf("sum is %d\n",s);
}
int sum(int n)
{
    if(n==1)// base condition
    return 1;
    else
        return (n+sum(n-1)); //recursion
}

