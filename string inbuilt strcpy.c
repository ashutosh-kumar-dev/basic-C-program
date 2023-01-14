//string inbuilt functions
//to implement strcpy() function.
//this function is used to copy one string into another
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30],y[30];
    printf("Enter the string to copy\n");
    gets(x);
    strcpy(y,x);// x will be copied to y
    printf("the copied string is\n");
    puts(y);
}
