// To show the working of pointer and array
#include<stdio.h>
int main()
{
int a[10],*p,i;
p=&a[0];
printf("Enter the elements of array using pointers\n");
for(i=0;i<=9;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<=9;i++)
{
printf("%d ",*(p+i));
}


}
