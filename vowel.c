#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch \n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("ch is vowel");
    }
    else
    {
        printf("ch is not vowel");
    }
}
