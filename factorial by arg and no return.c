

//
#include<stdio.h>
void fact(int n);//function declaration
int main()
{
    int n;
    printf("enter the value of a no \n");
    scanf("%d",&n);
    fact(n);// function call

}
void fact(int n)   //function definition
{
    int f=1;
    while (n>=1)
    {
        f=f*n;
        n=n-1;
    }

    printf("fact is %d \n",f);
}
