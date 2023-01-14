// dynamic structure variable
// allocating memory dynamically to the structure
// int *p;
//p=(int *)malloc(n*sizeof(int))
#include<stdio.h>
struct teacher
{
int id;
char name[30],dept[5];
float salary;
};
int main()
{
struct teacher *s;
int i,n;
printf("Enter the number of teachers\n");
scanf("%d",&n);
s=(struct teacher *)malloc(n*sizeof(struct teacher));
for(i=0;i<=n-1;i++)
{
printf("Enter the detail of teacher %d\n",i+1);
scanf("%d%s%s%f",&s[i].id,s[i].name,s[i].dept,&s[i].salary);
}
printf("Detail of the teacher is\n");
for(i=0;i<=n-1;i++)
{
if(s[i].salary>20000 && strcmpi(s[i].dept,"cse")==0)
printf("%d %s %s %f\n",s[i].id,s[i].name,s[i].dept,s[i].salary);
}
}
