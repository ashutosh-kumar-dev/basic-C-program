#include<stdio.h>
int factorial(int n);
int main()
{
    int n,f;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    f=factorial(n);// fn call
    printf("Factorial is %d\n",f);
}
int factorial(int n)
{
    if(n==0 || n==1)// base condition
    return 1;
    else
        return (n*factorial(n-1)); //recursion
}
