//string inbuilt functions
//to implement strcmp() function.
//this function is used to compare the two strings
// This function returns 0 if both the strings are equal otherwise
// it will return a non zero value
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30],y[30];
    int c;
    printf("Enter the first string\n");
    gets(x);
    printf("Enter the second string\n");
    gets(y);
    c=strcmp(x,y);
    if(c==0)
    printf("Both the strings are equal\n");
    else
    printf("Both the strings are not equal\n");
}
