#include<stdio.h>
int main()
{
    int a,b,c;             //assign the var as integers

    printf("enter the value of a and b \n");
    scanf("%d %d",&a,&b);      //for taking input of values

    c=a&b;
    printf("sum is %d",c);        //%d is format specifier for integer

}

