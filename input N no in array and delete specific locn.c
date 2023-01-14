

#include<stdio.h>
int main()
{
    int a[20],i,n,loc,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the location to delete\n");
    scanf("%d",&loc);
    for(j=loc;j<n-1;j++)// shifting of elements
    {
        a[j]=a[j+1];
    }
    printf("Updated array is \n");
    for(i=0;i<=n-2;i++)
    {
        printf("%d ",a[i]);
    }



}

