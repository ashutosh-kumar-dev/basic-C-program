#include<stdio.h>
void increase();
int main()
{
    increase();
    increase();
    increase();

}
void increase()
{
    auto int a=0;
    static int b=0;
    printf("a= %d, b= %d \n",a,b);
    a++;
    b++;
}
