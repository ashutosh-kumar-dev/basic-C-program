// to implement global variables
#include<stdio.h>
int a=10;// global variable
void print();
int main()
{
printf("Value of a is %d \n",a);
print();
printf("Value of a is %d \n",a);
}
void print()
{
printf("Value of a is %d \n",a);
a=20;
}
