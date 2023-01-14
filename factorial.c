#include<stdio.h>
int main()
{
    int x,f=1;
    printf("enter the value of x  \n");
    scanf("%d",&x);
    while(x>=1)

    {
        f=f*x;
        x=x-1;

    }
    printf("factorial is %d",f);

}
