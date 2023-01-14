// pointer to a structure
// we will use arrow operator for accessing the elements of the
//structure
#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
int main()
{
    struct student s={1,"rohan",365};
    struct student *p;
    p=&s;
    printf("Detail of the student is\n");
    printf("%d %s %f\n",p->roll_no,p->name,p->marks);//arrow operator

    //or
    printf("%d %s %f\n",(*p).roll_no,(*p).name,(*p).marks);//arrow operator


}

