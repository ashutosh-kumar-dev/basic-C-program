#include<stdio.h>
int main()
{
    float rad_c,ar_c,rad_s,vol_s;
    printf("enter the value of radius of circle\n");
    scanf("%f",&rad_c);

    printf("Enter the value of radius of sphere\n");
    scanf("%f",&rad_s);

    ar_c=3.14*rad_c*rad_c;
    printf("area of circle is %f\n",ar_c);

    vol_s=(4/3)*3.14*rad_s*rad_s*rad_s;
    printf("Volume of sphere is %f \n",vol_s);

}
