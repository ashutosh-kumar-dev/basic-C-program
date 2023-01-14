// to show the working of atof()


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x[30];
    double d;
    printf("Enter the string\n");
    gets(x);
    d=atof(x);
    printf("%.2lf ",d);
}

