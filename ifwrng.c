#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a b and c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    {
        printf("a is big");
    }

}
else
{
if(b>c)
    {
        printf("b is big");
    }
else
{
    printf("c is big");
}

}

}
