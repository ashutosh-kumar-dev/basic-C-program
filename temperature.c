#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the temp in celcius \n ");
    scanf("%f",&c);

    f=9/5*c+32;
    printf("celcius to farenhiet is %f",f);

    scanf("%f",&f);
    c=5/9*(f-32);

    printf("farenheit to celcius is %f",c);
}
