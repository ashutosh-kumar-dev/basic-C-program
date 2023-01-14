#include<stdio.h>
int main()

{
    int x,y,tmp;
    printf("enter the value of x and y \n");

    scanf("%d%d",&x,&y);

    tmp=x;
    x=y;
    y=tmp;


    printf("swaped value %d %d",x,y);
}
