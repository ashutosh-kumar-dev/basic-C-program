// lets take return type as int
#include<stdio.h>
int sum();//function declaration
int main()
{
    int c;
    c=sum();//function call
    printf("sum is %d\n",c);


}
int sum()   //function definition
{
    int a,b;
    printf("enter the value of a b \n");
    scanf("%d%d",&a,&b);
    return (a+b);
}

