
// lets take return type as float
#include<stdio.h>
float simple_interest();//function declaration
int main()
{
    float c;
    c=simple_interest();//function call
    printf("simple_interest is %f \n",c);


}
float simple_interest()   //function definition
{
    float p,r,t,si;
    printf("enter the value of p r t\n");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    return (si);
}

