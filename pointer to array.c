/* *(p+0)=12
*(p+1)=34
*(p+2)=56
*(p+3)=78
*(p+4)=90

*/

// To show the working of pointer and array
#include<stdio.h>
int main()
{
int a[]={12,34,56,78,90};
int *p,i;
//p=a;// pointer will pointing towards first element
p=&a[0];
for(i=0;i<=4;i++)
{
printf("%d ",*(p+i));
}

}

