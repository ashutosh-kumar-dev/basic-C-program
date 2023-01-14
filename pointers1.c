// To show the working of pointers
#include<stdio.h>
int main()
{
int x=45;
int *p;
p=&x;
printf("Value of *p is %d\n",*p);//45
printf("Value of x is %d\n",x);//45
*p=90;
printf("Value of *p is %d\n",*p);//90
printf("Value of x is %d\n",x);//90
}
