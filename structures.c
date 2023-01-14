//to shoe the working of structures
//with . operator we can access the elements of the structures
#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    float marks;
};

struct student s;
int main()
{
    printf("enter the name roll marks \n");
    scanf("%s%d%f",s.name,&s.roll,&s.marks);
    printf("details are \n");
    printf("%s%d%f",s.name,s.roll,s.marks);
}
