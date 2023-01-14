#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
switch(num%2)
{
case 0:
printf("num is even\n");
break;
case 1:
printf("num is odd\n");
break;
}

}
