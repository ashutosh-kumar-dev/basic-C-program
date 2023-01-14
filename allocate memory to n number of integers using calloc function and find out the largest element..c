// To show the working of calloc function
#include<stdio.h>
int main()
{
    int *a,i,n,largest;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("Enter the %d number of elements\n",n);
    for(i=0;i<=n-1;i++)
        {
            scanf("%d",&a[i]);
        }

    largest=a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>largest)
        largest=a[i];

    }
    printf("largest is %d\n",largest);



}


