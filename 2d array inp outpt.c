// Input and output in 2D array
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the 2D array of 9 elements\n");
    for(i=0;i<=2;i++)//outer loop
    {
        for(j=0;j<=2;j++)// inner loop
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of 2D array is\n");
    for(i=0;i<=2;i++)//outer loop
    {
        for(j=0;j<=2;j++)// inner loop
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
}
