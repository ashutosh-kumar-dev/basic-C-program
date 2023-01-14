// To show the working of realloc function
#include<stdio.h>
int main()
{
    int *p,i,n1,n2;
    printf("Enter the number of elements\n");
    scanf("%d",&n1);
    p=(int*)malloc(n1*sizeof(int));
    printf("\nEnter the %d number of elements\n",n1);
    for(i=0;i<=n1-1;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nEntered elements are\n");
    for(i=0;i<=n1-1;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\nEnter the new number of elements\n");
    scanf("%d",&n2);
    realloc(p,n2*sizeof(int));
    printf("Enter the %d number of elements\n",n2);
    for(i=0;i<=n2-1;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nEntered elements are\n");
    for(i=0;i<=n2-1;i++)
    {
        printf("%d ",p[i]);
    }

}
