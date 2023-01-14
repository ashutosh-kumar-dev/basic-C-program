#include<stdio.h>
struct employee
{
    int customer_id;
    char customer_name[20];
    int customer_telephone;
};

int main()
{

    int n,x,phone;
    printf("enter n no of customer details");
    scanf("%d",&n);
    struct employee e[n];

    for (x=0;x<=n-1;x++)
    {
        printf("\nenter customer_id  ");
        scanf("%d",&e[x].customer_id);
        printf("enter customer_name  ");
        scanf("%s",e[x].customer_name);
        printf("enter customer_telephone  ");
        scanf("%d",&e[x].customer_telephone);

    }
    printf("\nenter phone no to search  ");
    scanf("%d",&phone);
    for (x=0;x<=n;x++)
        {
            if (phone==e[x].customer_telephone )
            {
                printf("\nrecord found !!! ");
            }

        }
}


