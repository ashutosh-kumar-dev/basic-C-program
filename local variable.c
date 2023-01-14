// to implement local variables
#include<stdio.h>
void function();
int main()
{
int a=1,b=2;//local variable to main
printf("a = %d, b= %d\n",a,b);
function();

}
void function()
{
int c=3;// c is local to function()

printf("c= %d\n ",c);
}

