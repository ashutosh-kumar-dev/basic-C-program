// swapping of two variables by using call by reference method
#include<stdio.h>
void swap(int *a,int *b);
int main()
{
int a=12,b=34;
printf("Before function call a and b is %d %d\n",a,b);
swap(&a,&b);// calling function
printf("After function call a and b is %d %d\n",a,b);
}
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
