// to implement extern storage class variables
#include<stdio.h>
void print();
int main()
{
extern int a;
printf("Value of a is %d \n",a);
print();
printf("Value of a is %d \n",a);
}
void print()
{
extern int a;
printf("Value of a is %d \n",a);
a=20;
}
int a=10;// global variable
