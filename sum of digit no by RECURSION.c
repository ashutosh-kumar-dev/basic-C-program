#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);// fn call
    printf("sum of digit %d\n",s);
}
int sum(int n)
{
    if(n==0)// base condition
    return 0;
    else
        return (n%10+sum(n/10)); //recursion
}
/*
n=123

sum(123)

1. 123%10 +sum(123/10)
3+ sum(12)
2. 12%10 + sum(12/10)
3+2+ sum(1)
3. 1%10 + sum(1/10)
3+2+1+0

 */
