// Subtracting a number to a pointer
#include<stdio.h>
int main()
{
int a[]={12,34,56,78,90};
int *ptr;
ptr=&a[2];
printf("Value of *ptr is %d\n",*ptr);
ptr=ptr-1;
printf("Value of *ptr is %d\n",*ptr);

}
