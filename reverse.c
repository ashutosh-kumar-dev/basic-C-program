#include<stdio.h>
int main()
{
    int x,r,rev=0;
    printf("enter the value of n  \n");
    scanf("%d",&x);
    while(x!=0)

    {

        r=x%10;
        rev=rev*10+r;
        x=x/10;

    }
    printf("reverse is %d",rev);

}
