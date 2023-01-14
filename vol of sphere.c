#include<stdio.h>
int main()
{
    float rad_s,vol_s;
    printf("Enter the radius\n");
    scanf("%f",&rad_s);
    vol_s=(4/3)*3.14*rad_s*rad_s*rad_s;
    printf("Volume is %f",vol_s);

}
