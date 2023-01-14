#include<stdio.h>
int main()
{
int i,n,f;
for(i=1;i<=10;i++)// iterations
{
n=i;
f=1;
while(n!=0)// for calculating fac
{
f=f*n;
n--;
}
printf("Factorial of %d is %d\n",i,f);

}
}
