
//
#include<stdio.h>
int sum(int a,int b);//function declaration
int main()
{
    int a,b,c;
    printf("enter the value of a b \n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);// function call
    printf("sum is %d",c);

}
int sum(int a ,int b)   //function definition
{

   return (a+b);
}

