

#include<stdio.h>
void simple_interest(float p,float r,float t);//function declaration
int main()
{
    float p,r,t;
    printf("enter the value of p r t\n");
    scanf("%f%f%f",&p,&r,&t);
    simple_interest(p,r,t);//function call



}
void simple_interest(float p,float r,float t)   //function definition
{
    float s;

    s=(p*r*t)/100;
    printf("simple_interest is %f \n",s);
}

