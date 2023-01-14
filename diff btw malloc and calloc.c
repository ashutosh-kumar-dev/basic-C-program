// To show the differences between malloc and calloc
#include<stdio.h>
int main()
{
int *a,*p,i,n;
printf("Enter the number of elements\n");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
p=(int*)calloc(n,sizeof(int));
printf("Elements of a using malloc function\n");
for(i=0;i<=n-1;i++)
{
printf("%d ",a[i]);
}
printf("\nElements of p using calloc function\n");
for(i=0;i<=n-1;i++)
{
printf("%d ",p[i]);
}
}
