// call by reference method
#include<stdio.h>
void swap(int a,int b);
int main()
{
int a=10,b=34;
printf("Before function call value of a b  is %d %d \n",a,b);
swap(a,b);// function call or calling function
printf("After function call value of a b is %d %d \n",a,b);
}
void swap(int a,int b)// called function
{
 int c;
 c=a;
 a=b;
 b=c;
printf("During function call value of a b is %d %d \n",a,b );
}
