
#include<stdio.h>
int main()
{
    int a[10],*p,i,sum=0;
    p=&a[0];
    printf("Enter the elements of array using pointers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+(*p+i);//a[i]

    }
    printf("%d ",sum);


}
