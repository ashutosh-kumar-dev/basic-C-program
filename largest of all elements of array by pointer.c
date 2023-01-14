#include<stdio.h>
int main()
{
int a[10],*p,i,largest;
p=&a[0];
printf("Enter the elements of array using pointers\n");
for(i=0;i<=9;i++)
{
scanf("%d",(p+i));
}
largest=*p;
for(i=1;i<=9;i++)
{
if(*(p+i)>largest)
largest=*(p+i);
}
printf("largest is %d ",largest);


}
