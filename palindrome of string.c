/**1. i=0, 0<2
temp=h
x[0]=x[5-0-1], x[0]=x[4], x[0]=o
x[5-0-1]=temp, x[4]=h
i=1

2. i=1,i<2
temp=x[1], temp=e
x[1]=x[5-1-1], x[1]=x[3], x[1]=l
x[5-1-1]=e, x[3]=e
i=2
**/

#include<stdio.h>
#include<string.h>
int main()
{
    char x[30],y[30],temp;//saving x in y
    int i=0,len;
    printf("Enter the string\n");
    gets(x);
    strcpy(y,x);
    len=strlen(x);
    while(i<len/2)
    {
        temp=x[i];
        x[i]=x[len-i-1];
        x[len-i-1]=temp;
        i++;
    }

    int c=strcmp(y,x);

    if (c==0)
        printf("string is palindrome \n");
    else
        printf("string is not palindrome \n");

}
