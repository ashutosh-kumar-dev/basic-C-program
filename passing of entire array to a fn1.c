// passing entire array to function as argument
#include<stdio.h>
void display(int a[],int n);
int main()
{
int a[100],i,n;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the %d elements of array\n",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
display(a,n);// passing by address
for(i=0;i<=n-1;i++)
{
printf("%d ",a[i]);
}
}
void display(int x[],int n)
{
int i;
for(i=0;i<=n-1;i++)
x[i]=x[i]+1;// increasing all element by 1

}
