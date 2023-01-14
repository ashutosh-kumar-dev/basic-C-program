//string inbuilt functions
//to implement strlen() function.
//this function is used to calculate length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    int l;
    printf("Enter the string\n");
    gets(x);
    l=strlen(x);
    printf("Length of the string is %d \n",l);
}

