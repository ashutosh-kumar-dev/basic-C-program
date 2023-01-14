#include<stdio.h>
int main()
{
    int a[20],i,n,element,loc,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to insert\n");
    scanf("%d",&element);
    printf("Enter the location\n");
    scanf("%d",&loc);
    for(j=n-1;j>=loc;j--)// shifting from R TO L
    {
        a[j+1]=a[j];
    }
    a[loc]=element;
    printf("Updated array is \n");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
}
