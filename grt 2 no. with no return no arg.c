//
#include<stdio.h>
void grt();//function declaration
int main()
{
    grt();// function call

}
void grt()//function definition
{
    int a,b;
    printf("enter the value of a b \n");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("a is big %d \n",a);
    else
        printf("b is big %d\n",b);
}
