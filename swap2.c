#include<stdio.h>
int main()

{
    int x,y;
    printf("enter the value of x and y \n");

    scanf("%d%d",&x,&y);

    x=x+y;
    y=x-y;
    x=x-y;


    printf("swaped value %d %d",x,y);
}
