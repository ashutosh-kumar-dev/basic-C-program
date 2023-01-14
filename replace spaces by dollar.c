#include<stdio.h>
int main()
{
    char x[30];// string
    int i=0,count=0;
    printf("enter the string \n");
    gets(x);
    while(x[i]!='\0')
    {
        if(x[i]==' ')
        {
            x[i]='$';
        }
        i++;
    }
    printf("space replace by dollar \n");
    puts(x);

}
