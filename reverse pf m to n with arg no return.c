
#include<stdio.h>
void reverse(int m, int n);//function declaration
int main()
{
    int m,n;
    printf("enter the value of m and n  \n");
    scanf("%d %d",&m,&n);

    reverse(m,n);
}
void reverse(int m, int n)
{
    int i,a,r,rev;
    for(i=m;i<=n;i++)
{
    a=i;
    rev=0;
    while(a!=0)
{
    r=a%10;
    rev=rev*10+r;
    a=a/10;
}
    printf("reverse of %d is %d \n",i,rev);

}
}
