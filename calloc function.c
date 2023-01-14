// To show the working of calloc function
#include<stdio.h>
int main()
{
    int *a,i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements of array is \n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
}

