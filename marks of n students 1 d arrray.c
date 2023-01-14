#include<stdio.h>
int main()
{
    float a[10];// 10 is total no or last index
    int i,n;
    printf("enter the no of students");
    scanf("%d",&n);
    printf("enter the marks  of  students \n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&a[i]);

    }
    printf("marks are \n");

    for (i=0;i<=n-1;i++)
    {
        printf("%f ",a[i]);
    }

}
