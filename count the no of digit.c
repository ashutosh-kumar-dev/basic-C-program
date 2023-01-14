#include<stdio.h>
int main()
{
    int x,r,count=0;
    printf("enter  no  \n");
    scanf("%d",&x);

    while(x!=0)

    {

        count=count+1;
        x=x/10;

    }


    printf("no of digits is %d",count);

}




