#include<stdio.h>
int main()
{
    int *a,i,n,sum_e=0,sum_o=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("Enter the %d number of elements\n",n);
    for(i=0;i<=n-1;i++)
        {
            scanf("%d",&a[i]);
        }

    for(i=0;i<=n;i++)
    {
        if(a[i]%2==0)
            {
            sum_e=sum_e+a[i];
            }
        else
           {
            sum_o=sum_o+a[i];
           }
    }
    printf("sum of even is %d\n",sum_e);
    printf("sum of odd is %d\n",sum_o);
}


