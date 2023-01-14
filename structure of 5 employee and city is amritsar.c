// array of structures
// array of structure is required or used when we want to store the information
// about the multiple structure variables
#include<stdio.h>
struct employee
{
    int id;
    char name[30],city[15];
    float salary;
};
struct employee e[5];// s[0] s[1] s[2] s[3] s[4]
int main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter the detail of employee %d\n",i+1);
        scanf("%d%s%s%f",&e[i].id,e[i].name,e[i].city,&e[i].salary);
    }
    printf("Details of the employee having city as amritsar are\n");

    for(i=0;i<=4;i++)
    {
        if (strcmpi(e[i].city,"amritsar")==0)
            printf("%d %s %s %f\n",e[i].id,e[i].name,e[i].city,e[i].salary);
    }
}


