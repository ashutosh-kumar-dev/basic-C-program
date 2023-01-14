#include<stdio.h>
int main()
{
    float a,b,c,d,e,total,disc,disc_amt;
    printf("Enter the value of a b c d e\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    disc_amt=total*10/100;
    disc=total-disc_amt;

    printf("\n total amount is %f\n",total);
    printf("\n amount after discount is %f",disc);

}
