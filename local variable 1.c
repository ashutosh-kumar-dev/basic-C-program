// to implement local variables
#include<stdio.h>
int main()
{
int a=1;// local variable to main
{// new scope or new block
int b=2;// local to block
printf("Value of b is %d\n ",b);
}
//printf("Value of b is %d\n ",b); Error
printf("Value of a is %d\n ",a);
}
