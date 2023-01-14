#include<stdio.h>
int a=10;// global variable
void print();
int main()
{
int a=1;// local to main
printf(" Value of a is %d \n",a);
print();
}
void print()
{
printf("Value of a is %d\n",a);
}
