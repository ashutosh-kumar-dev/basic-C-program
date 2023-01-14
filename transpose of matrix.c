// To print transpose of a matrix
#include<stdio.h>
int main()
{
    int a[3][3],t[3][3],i,j;
    printf("Enter the elements of matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered elements of matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            t[i][j]=a[j][i];
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }



}
