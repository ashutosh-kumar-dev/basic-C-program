#include<stdio.h>
void increase(float *n);
int main()
{
float n=10.1;
printf("Before function call n is %f\n",n);
increase(&n);// calling function
printf("After function call n is %f\n",n);
}
void increase(float *n)
{
    *n=*n+1;
    printf("during function call n is %f\n",*n);

}
