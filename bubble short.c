// 5 4 3 2 1
// 5>4, hold=5,a[0]=4,a[1]=5
// 4 5 3 2 1
// 4 3 5 2 1
// 4 3 2 5 1
// 4 3 2 1 5


#include <stdio.h>
int main()
{
    int a[100];
    int hold,i,j,n;
    printf("\n Enter value of n:");
    scanf("%d",&n);
    printf("\n Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf( "Data items in original order" );
    for (i=0;i<n;i++ )
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n-1;i++)// for passes
    {
        for(j=0;j<n-1-i;j++)// for comparision and swapping
        {
            if(a[j]>a[j+1])
            {
                hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
        }
    }
    printf( "\nData items in ascending order" );
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
