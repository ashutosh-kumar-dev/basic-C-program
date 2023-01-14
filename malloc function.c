// To show the working of malloc function
// void * malloc(size)
// &a[i] and (a+i) are same
//a[i] and *(a+i) are same
#include<stdio.h>
int main()
{
    int *a,i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    printf("Enter the %d elements of arrays\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        //scanf("%d",(a+i));
    }
    printf("Entered number of elements are\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
        //printf("%d ",*(a+i));
    }

}
