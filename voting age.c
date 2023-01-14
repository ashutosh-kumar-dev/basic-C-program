#include<stdio.h>
int main()
{
int age;
printf("Enter the value of age \n");
scanf("%d",&age);
if(age<=0 || age>120)
{
printf("age is not valid\n");
}
else if(age>=18)
{
printf("person eligible for voting\n");
}
else
{
printf("person is not eligible");
}
}
