//Write a program to input an array of 10 integers and search an element using linear search
#include<stdio.h>
int main()
{
    int a[10],i,element,flag=0;
    printf("Enter the elements of array\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&element);
    for(i=0;i<=9;i++)
    {
        if(a[i]==element)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("Search is successful\n");
    else
    printf("Search is not successful\n");


}
