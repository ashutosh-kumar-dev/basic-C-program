// To print the string character by charcater by using a loop
#include<stdio.h>
int main()
{
char x[]="hello world";
int i=0;
while(x[i]!='\0')
{
printf("%c",x[i]);
i++;
}

}



/*
===========================
// Name of the string is address of first charater
#include<stdio.h>
int main()
{
char x[]="hello world";
printf("%c",*x);
}

================================

// To print the string character by charcater by using a loop
#include<stdio.h>
int main()
{
char x[]="hello world";
int i=0;
while(x[i]!='\0')
{
printf("%c",*(x+i)); <<<<<<<<<<<<<--------------////////////////////
i++;
}

}



*/

