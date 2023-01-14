// To show the working of union
#include<stdio.h>
union student
{
    int roll_no;
    char name[30];
    float marks;
};
union student s;// only 30 bytes will be allocated
//union student s={1,"rohan",365}; not allowed

int main()
{
    s.roll_no=1;
    printf("Roll number is %d\n",s.roll_no);
    strcpy(s.name,"rohan");
    puts(s.name);
    s.marks=365;
    printf("Marks are %f\n",s.marks);

}
