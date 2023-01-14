#include<stdio.h>
int main()
{
    int x,r,sum=0,original;
    printf("enter three digit no  \n");
    scanf("%d",&x);
    original=x;
    while(x!=0)

    {

        r=x%10;
        sum=sum+(r*r*r);
        x=x/10;

    }

    if (sum==original)
    {
        printf("it is armstrong ");
    }
    else
    {
        printf("not a armstrong");
    }
}




