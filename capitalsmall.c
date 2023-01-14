#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch \n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("ch is capital letter \n");
    }
    else if (ch>='a'&&ch<='z')
    {
        printf("ch is small letter\n");
    }
    else
    {
        printf("ch is some other ch");
    }


}
