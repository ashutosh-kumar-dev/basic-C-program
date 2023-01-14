// to show the working of itoa()


#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
char x[50];
printf("Enter the value of i\n");
scanf("%d",&i);
itoa(i,x,2);//binary.....if 2<->16 then hexadecimal
printf("Binary form of i is\n");
puts(x);
}
