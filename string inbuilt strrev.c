//string inbuilt functions
//to implement strrev() function.
//this function is used to calculate reverse of the string
// This function will store the reverse in the original string
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    printf("Enter the string\n");
    gets(x);
    strrev(x);
    printf("Reverse of the string is \n");
    puts(x);
}
