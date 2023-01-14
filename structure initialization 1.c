// to initialize a structure or structure variable
#include<stdio.h>
struct student
{
int roll_no;
char name[30],gender[6];
float marks;
};
int main()
{
struct student s1;
s1.roll_no=1;
strcpy(s1.name,"rohan");
strcpy(s1.gender,"male");
s1.marks=365;
printf("Detail of the student s1\n");
printf("%d %s %s %f\n",s1.roll_no,s1.name,s1.gender,s1.marks);


}
