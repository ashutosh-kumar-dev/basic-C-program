#include<stdio.h>
int main()
{
    char x[30];// string
    int i=0,count=0;
    printf("enter the string \n");
    gets(x);
    while(x[i]!='\0')
    {
        if (x[i]==' ')
        {
            count++;

        }
        i++;
    }
    printf("no of spaces are %d \n",count);

}
