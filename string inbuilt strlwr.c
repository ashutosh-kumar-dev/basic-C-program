//string inbuilt functions
//to implement strlwr() function
//this function is used to convert the string to lower case

#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    printf("Enter the string\n");
    gets(x);
    strlwr(x);
    printf("String in lower case is \n");
    puts(x);
}
