#include<stdio.h>
void function();
int main()
{
auto int xy;// local variable to the block main
    printf("Initial value of xy is %d\n",xy);
    xy=12;
    printf("Updated value of xy is %d\n",xy);
    function();//function call
}
void function()
{
auto int xy=34;
    printf("Updated value of xy is %d\n",xy);
}
