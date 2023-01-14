// To show the working of constant pointer
#include<stdio.h>
int main()
{

int x=34, y=67;
int * const ptr=&x;
printf("Value of *ptr is %d\n",*ptr);
// ptr=&y;// invalid in constant pointer
}
