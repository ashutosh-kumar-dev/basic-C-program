#include<stdio.h>
int main()
{
    int x,r,rev=0,original;
    printf("enter the value of n  \n");
    scanf("%d",&x);
    original=x;
    while(x!=0)

    {

        r=x%10;
        rev=rev*10+r;
        x=x/10;

    }

    if (rev==original)
    {
        printf("it is palindrome ");
    }
    else
    {
        printf("not a palindrome");
    }
}




