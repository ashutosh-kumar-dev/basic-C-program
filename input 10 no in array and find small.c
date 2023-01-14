#include<stdio.h>
int main()
{
    int a[5],i,smallest;
    printf("input 5 elements\n");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0]; // let first element is smallest
    for(i=1;i<=4;i++)
    {
        if (a[i]<smallest)
        {
             smallest=a[i];
        }
    }
    printf("smallest elements is %d ",smallest);
}


