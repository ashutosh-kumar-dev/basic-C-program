// To show the working of void pointer
#include<stdio.h>
int main()
{
void *p;// void pointer
int x=34;
float y=34.00;
char ch='h';
p=&x;// pointer is pointer to int
printf("Value of *p is %d\n",*(int *)p);
p=&y;// pointer is pointing to float
printf("Value of *p is %f\n",*(float *)p);
p=&ch;// pointer is pointing to char
printf("Value of *p is %c\n",*(char *)p);
}

