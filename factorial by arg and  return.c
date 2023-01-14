#include<stdio.h>
int factorial(int n);
int main()
{
    int n,f1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    f1=factorial(n);
    printf("Factorial is %d\n",f1);
}
int factorial(int n)
{
    int f=1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    return f;
}
