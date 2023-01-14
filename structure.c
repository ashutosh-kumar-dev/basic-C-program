#include<stdio.h>
struct book
{
    int id;
    char name[10];
    float salary;
}e;
int main()
{
    printf("Enter the id,name and salary of the employee\n");
    scanf("%d%s%f",&e.id,e.name,&e.salary);//& not in name as string not in scanf
    printf("Details of the employee is\n");
    printf("%d %s %f",e.id,e.name,e.salary);
}

