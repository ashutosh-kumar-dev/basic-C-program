#include<stdio.h>
void task(int a[],int n,int element);
int main()
{
    int a[100],i,n,element;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&element);

    task(a,n,element);
}

void task(int a[],int n,int element)
{
    int beg,last,mid,loc=-1;

    beg=0;
    last=n-1;
    mid=(beg+last)/2;
    while(beg<=last)
    {
        if(a[mid]==element)
        {
            loc=mid;
            break;
        }
    else if(element>a[mid])
        beg=mid+1;
    else
        last=mid-1;

        mid=(beg+last)/2;
    }
    if(loc!=-1)
    printf("element found at loc %d\n",loc);
    else
    printf("element not found\n");

}
