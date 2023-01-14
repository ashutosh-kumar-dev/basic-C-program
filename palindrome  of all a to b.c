#include<stdio.h>
int main()
{
    int i,n,r,rev,a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        rev=0;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if (rev==i)
        printf("palindrome between a to b are %d\n",i);

    }
}
