//string inbuilt functions
//to implement strupr() function
//this function is used to convert the string to upper case

#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    printf("Enter the string\n");
    gets(x);
    strupr(x);
    printf("String in upper case is \n");
    puts(x);
}
