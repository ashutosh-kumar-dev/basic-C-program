//simple interest=p*r*t
#include<stdio.h>
int main()
{
    float p,r,t,s;
    printf("enter the value of p,r,t \n");
    scanf("%f%f%f",&p,&r,&t);
    s=(p*r*t)/100;
    printf("simple interest is %f",s);

}
