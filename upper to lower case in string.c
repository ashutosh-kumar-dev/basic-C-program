#include<stdio.h>
int main()
{
    char x[30];// string
    int i=0,count=0;
    printf("enter the string \n");
    gets(x);
    while(x[i]!='\0')
    {
        if(x[i]>='A'  &&  x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
        i++;
    }
    printf("string in lower case is");
    puts(x);

}
