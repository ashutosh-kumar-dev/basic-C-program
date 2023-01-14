#include<stdio.h>
void func1();
void func2();
int main()
{
auto int a=30;//Local variable of main()
func1();
func2();
printf("\n a=%d",a);

}
void func1()
{
auto int a=10; // Local variable of func1()
printf("\n a=%d",a);
}
void func2()
{
auto int a=20; //Local variable of func2()
printf("\n a=%d",a);
}
