/*
int a[20];
n=5
a[0]=11
a[1]=3
a[2]=5
a[3]=18
a[4]=10
a[5]=

element =100
loc =2

11 3 5 18 10

1. j=4, 4>=2

a[4+1]=a[4], a[5]=10
11 3 5 18 10 10

2. j=3 3>=2
a[3+1]=a[3], a[4]=18
11 3 5 18 18 10

3. j=2 2>=2
a[2+1]=a[2], a[3]=5

11 3 5 5 18 10

4. a[2]=100
11 3 100 5 18 10
*/
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
