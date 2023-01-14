
// To show the working of malloc function
#include<stdio.h>
int main()
{
    float *m,sum=0,avg;
    int i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    m=(float*)malloc(n*sizeof(float));
    printf("Enter the marks of %d students\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&m[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+m[i];
    }
    avg=sum/n;
    printf("Average is %f\n",avg);


}
