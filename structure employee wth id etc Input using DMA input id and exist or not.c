//
#include<stdio.h>
struct employee
{
    int id;
    char name[30],dept[10];
    float salary;
};
int main()
{
    int i,n,id,flag=0;
    struct employee *e;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    e=(struct employee*)malloc(n*sizeof(struct employee));
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the detail of employee %d\n",i+1);
        scanf("%d%s%s%f",&e[i].id,e[i].name,e[i].dept,&e[i].salary);
    }
    printf("Enter the id to search\n");
    scanf("%d",&id);
    for(i=0;i<=n-1;i++)
    {
        if(id==e[i].id)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("Employee exist\n");
    else
    printf("Employee does not exist\n");
}


