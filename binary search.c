/*n=10
10 20 30 40 50 60 70 80 90 100

beg=0
last=9
mid=(0+9)/2, mid =4

1. Element =50

a. 0<=9
a[4]==element// 50==50, loc=4

2. Element =20

a. 0<=9
a[4]==element// 50==20 No
20>50 No
last=4-1=3
mid=(0+3)/2,mid=1
b. 0<=3
a[1]==element, 20==20 True, loc=1

3. Element =90

a. 0<=9
a[4]==eleemnt, 50==90 No
90>50 True, beg=4+1=5
mid=(5+9)/2 mid=7
b. 5<=9
a[7]==element, 80==90 No
90>80 Ys, beg=7+1=8
mid=(8+9)/2, Mid=8
c. 8<=9
a[8]==element, 90==90, Loc=8

*/
// To implement binary search
#include<stdio.h>
int main()
{
    int a[100],i,n,beg,last,mid,loc=-1,element;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&element);
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
    printf("Search is successful at loc %d\n",loc);
    else
    printf("Search is Not successful\n");
}

