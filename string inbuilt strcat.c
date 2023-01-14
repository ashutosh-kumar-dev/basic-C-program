wo strings
#include<stdio.h>
#include<string.h>
int main()
{
char x[100],y[30];
printf("Enter the first string\n");
gets(x);
printf("Enter the second string\n");
gets(y);
strcat(x,y);//x=x+y
printf("strings after joining is\n");
puts(x);
}

