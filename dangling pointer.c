// To show the working of dangling pointer
#include<stdio.h>
int main()
{

int *ptr;
{
int x=34;
ptr=&x;
printf("Value of *ptr is %d \n",*ptr);
}
printf("Value of *ptr is %d \n",*ptr);// dangling pointer
// printf("value of x is %d\n",x); this will give error
}

