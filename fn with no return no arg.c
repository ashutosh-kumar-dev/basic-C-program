//
#include<stdio.h>
void sum();//function declaration
int main()
{
    sum();// function call
    sum();
}
void sum()//function defination
{
    int a,b,c;
    printf("enter the value of a b \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d \n",c);
}
