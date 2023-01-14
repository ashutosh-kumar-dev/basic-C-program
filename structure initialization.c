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
    struct student s1={1,"rohan","male",365};
    printf("Detail of the student s1\n");
    printf("%d %s %s %f\n",s1.roll_no,s1.name,s1.gender,s1.marks);
    struct student s2={2,"rita","female",350};
    printf("Detail of the student s2\n");
    printf("%d %s %s %f\n",s2.roll_no,s2.name,s2.gender,s2.marks);

}
