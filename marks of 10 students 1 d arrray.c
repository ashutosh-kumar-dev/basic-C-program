#include<stdio.h>
int main()
{
    float a[10];
    int i;
    printf("enter the marks  of 10 students \n");
    for(i=0;i<=9;i++)
    {
        scanf("%f",&a[i]);

    }
    printf("marks are \n");

    for (i=0;i<=9;i++)
    {
        printf("%f ",a[i]);
    }

}
