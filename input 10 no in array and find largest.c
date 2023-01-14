#include<stdio.h>
int main()
{
    int a[5],i,largest;
    printf("input 5 elements\n");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0]; // let first element is largest
    for(i=1;i<=4;i++)
    {
        if (a[i]>largest)
        {
             largest=a[i];
        }
    }
    printf("largest elements is%d ",largest);
}

/*int a[5];
a[0]=11
a[1]=3
a[2]=5
a[3]=18
a[4]=10

largest=11

1. 3>11 false
2. 5>11 false
3. 18>11 true
largest=18
4. 10>18 false
*/

