#include<stdio.h>
int main()
{
int x=45;
int *p;// this is null pointer
printf("Address of wild pointer is %x\n",p);
printf("value of wild pointer is %d\n",*p);
*p=&x;
printf("value of wild pointer is %d\n",*p);//sometimes not working

}
