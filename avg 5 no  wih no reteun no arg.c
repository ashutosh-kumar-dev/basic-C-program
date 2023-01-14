#include<stdio.h>
void average();
int main()
{
average();
}
void average()
{
    float a,b,c,d,e,avg;
    printf("Enter the values of a b c d e\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("average is %f\n",avg);

}
