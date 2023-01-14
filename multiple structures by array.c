// array of structures
// array of structure is required or used when we want to store the information
// about the multiple structure variables
#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
struct student s[5];// s[0] s[1] s[2] s[3] s[4]
int main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter the detail of student %d\n",i+1);
        scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
    }
    printf("Details of the students is\n");

    for(i=0;i<=4;i++)
    {

        printf("%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);
    }
}

