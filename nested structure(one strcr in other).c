// Nested structure
// A structure is said to be nested if it contains a structure inside it
// to declare the complete structure with in another structure
#include<stdio.h>
struct employee
{
int id;
char name[30];
struct address
{
char city[30];
char state[30];
}a;
}e;
int main()
{
printf("Enter the detail of employee\n");
scanf("%d%s%s%s",&e.id,e.name,e.a.city,e.a.state);
printf("Detail of the employee is\n");
printf("%d %s %s %s\n",e.id,e.name,e.a.city,e.a.state);

}

