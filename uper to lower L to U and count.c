#include<stdio.h>
int main()
{
    char ch,*p;
    int c1=0;
    int c2=0;
    printf("enter the value of ch -->");
    scanf("%c",&ch);
    p=&ch;


    while (*p!='*')

    {
            if(*p>='A'&&*p<='Z')
        {
            c1=c1+1;
            *p=*p+32;
            printf("character in lower case is %c\n",*p);
            printf("\nenter the value of ch -->");
        }
         else if (*p>='a'&&*p<='z')
        {
            c2=c2+1;
            *p=*p-32;
            printf("character in upper is %c \n",*p);
            printf("\nenter the value of ch -->");
        }



        scanf("%c",&ch);

        p=&ch;

    }
    printf("no of uppercase is %d and lower case is %d",c1,c2);


}
