// To print transpose of a matrix
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
        sum=0;
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("= %d",sum);
        printf("\n");
    }
}
