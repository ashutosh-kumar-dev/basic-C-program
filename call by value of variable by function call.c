// call by value method
#include<stdio.h>
void increase(int n);
int main()
{
    int n=10;
    printf("Before function call value of n is %d\n",n);
    increase(n);// function call or calling function
    printf("After function call value of n is %d \n",n);
}
void increase(int n)// called function
{
    n=n+10;// n=20
    printf("During function call value of n is %d \n",n);
}
