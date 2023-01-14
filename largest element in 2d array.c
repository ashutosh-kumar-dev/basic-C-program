#include<stdio.h>
int main()
{
    int a[3][4],i,j,largest;
    printf("Enter the elements of 2 D array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    largest =a[0][0];
    for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]>largest)
            largest=a[i][j];
        }
    }
    printf("Largest element is %d\n",largest);
}

