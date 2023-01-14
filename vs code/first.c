#include<stdio.h>
int main()
{
    int x=0,s=0,a=0,temp,y=5;
    int n=5,x1;
    int ar[n];

    for(x1=0;x1<=n-1;x1++)
    {
        scanf("%d",&ar[x1]);
    }

    int min=0;
    int max=0;
    for (x;x<=y-1;x++)
        {
            temp=ar[x];

            ar[x]=0;

            int t2=s;
            for (a;a<=y-1;a++)
            {
                s=s+ar[a];
                printf("%dsum----\n",s);
            }


           if(s>=max)
           {

               max=s;

           }
           min=s;
           if(max<=min)
           {
               min=max;

               printf("%dmin=====\n",min);

           }

            a=0;
            s=0;

            ar[x]=temp;

        }
        printf("%dmin******fnnn******\n",min);
        printf("%dmax*****fnnn*******\n",max);
}
