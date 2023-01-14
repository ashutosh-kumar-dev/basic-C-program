//
#include<stdio.h>
void grt();//function declaration
int main()
{
    grt();// function call

}
void grt()//function definition
{
    int a,b,c;
    printf("enter the value of a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
    printf("a is greatest\n");
    }
    else if(b>c)
    {
    printf("b is greatest");
    }
    else
    {
    printf("c is greatest");
    }
}
