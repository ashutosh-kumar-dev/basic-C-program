

//
#include<stdio.h>
int area(int ,int );//function declaration
int main()
{
    int l,b,c;
    printf("enter the value of l and b \n");
    scanf("%d%d",&l,&b);
    c=area(l,b);// function call
    printf("area of rectangle is %d",c);

}
int area(int l ,int b)   //function definition
{

   return (l*b);
}

