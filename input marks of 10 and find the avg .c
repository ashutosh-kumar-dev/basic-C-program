#include<stdio.h>
int main()
{
    float m[10],avg,sum=0;
    int i;
    printf("input marks 10 students\n");
    for (i=0;i<=9;i++)
    {
        scanf("%f",&m[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+m[i];
    }
    avg=sum/10;

    printf("avg is %f \n",avg);
}


