#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of 2 D array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);//matrix
            if (i==j)//row col same
               {
                sum=sum+a[i][j];
               }
        }
        printf("\n");
    }
    printf("Sum of all the elements of left diagonal 2 D array is %d\n",sum);
}


