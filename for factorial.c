#include<stdio.h>
int main()
{
int i,f=1,n;
printf("enter the no \n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;

}
printf("fact is is %d",f);
}
