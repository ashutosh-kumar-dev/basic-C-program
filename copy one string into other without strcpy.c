// to copy one string to another without using strcpy()
#include<stdio.h>
int main()
{
char x[30],y[30];
int i=0;
printf("Enter the x string\n");
gets(x);
//hello
while(x[i]!='\0')
{
y[i]=x[i];
i++;
}
y[i]='\0';
printf("copied string is\n");
puts(y);
}

