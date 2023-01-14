#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch \n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
    }
    printf("character in capital is %c",ch);
}
