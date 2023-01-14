#include<stdio.h>
int main()
{
    int x=34;
    int *p;
    p=&x;
    printf("value of p is %x\n",p);
    printf("address of x is %x\n",&x);
    printf("value of *p is %d\n",*p);


    float y=34.165;
    float *fp;
    fp=&y;
    printf("value of fp is %x\n",fp);
    printf("address of y is %x\n",&y);
    printf("value of *fp is %f\n",*fp);



    char z='a';
    char *cp;
    cp=&z;
    printf("value of cp is %x\n",cp);
    printf("address of z is %x\n",&z);
    printf("value of *cp is %c\n",*cp);

}
