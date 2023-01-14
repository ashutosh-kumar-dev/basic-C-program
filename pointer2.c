// To show the working of pointers
#include<stdio.h>
int main()
{
int x=45;
int *p1,*p2;
p1=&x;
p2=&x;
printf("Value of *p1 is %d\n",*p1);//45
printf("Value of *p2 is %d\n",*p2);//45
*p1=90;
printf("Value of *p1 is %d\n",*p1);//90
printf("Value of *p2 is %d\n",*p2);//90
}
