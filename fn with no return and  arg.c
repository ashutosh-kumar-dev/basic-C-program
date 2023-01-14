
//
#include<stdio.h>
void sum(int a,int b);//function declaration
int main()
{
    int a,b;
    printf("enter the value of a b \n");
    scanf("%d%d",&a,&b);
    sum(a,b);// function callz

}
void sum(int a ,int b)   //function definition
{
    int c;
    c=a+b;
    printf("sum is %d \n",c);
}
