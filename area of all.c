#include<stdio.h>
int main()
{
    float b,h,s,l,b1,at,as,ar;

    printf("enter the value of base and height \n");
    scanf("%f%f",&b,&h);
    at=0.5*b*h;
    printf("area of triangle is %f",at);

    printf("\n enter the value of breadth and length \n");
    scanf("%f%f",&b1,&l);
    ar=l*b1;
    printf("area of rec is %f",ar);

    printf("\n enter the value of side \n");
    scanf("%f",&s);
    as=s*s;
    printf("area of square is %f",as);




}
