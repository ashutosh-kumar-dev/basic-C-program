// passing entire array to function as argument
#include<stdio.h>
void display(int a[],int n);// array and total element
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);// passing by address here a is entire array
}
void display(int x[],int n)   //// we can write same or diff name
{
    int i;
    for(i=0;i<=n-1;i++)
    printf("%d ",x[i]);

}
