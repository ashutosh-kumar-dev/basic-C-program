#include<stdio.h>
int main()
{
    char x[30];// string
    int i=0,count=0;
    printf("enter the string \n");
    gets(x);
    while(x[i]!='\0')
    {
        if(x[i]=='a' || x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("Number of vowels are %d",count);

}
