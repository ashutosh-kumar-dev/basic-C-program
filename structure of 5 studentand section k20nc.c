#include<stdio.h>
struct student
{
    int roll_no;
    char name[30],section[10];
    float marks;
};
struct student s[5];// s[0] s[1] s[2] s[3] s[4]
int main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter the detail of student %d\n",i+1);
        scanf("%d%s%s%f",&s[i].roll_no,s[i].name,s[i].section,&s[i].marks);
    }
    printf("Details of the students is\n");

    for(i=0;i<=4;i++)
    {
        if(strcmpi(s[i].section,"k20nc")==0)
        printf("%d %s %s %f\n",s[i].roll_no,s[i].name,s[i].section,s[i].marks);
    }
}

