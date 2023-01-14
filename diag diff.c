#include<stdio.h>

#include<stdlib.h>
int main(){
    int arr_columns=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    int sum1=0;
    int y;

    int b;
    int i=0;
    int j;
    int abso;
    b=arr_columns;
    printf("%d\n",b);

    y=b-1;
    j=0;
    for(int i=0;i<=b-1;i++)

    {
            sum=sum+arr[i][j];
            printf("%d--->",sum);

            j=j+1;

        sum1=sum1+arr[i][y];
        y=y-1;

    }
     printf("\n%d",sum);
     printf("\n%d",sum1);
    abso=abs(sum-sum1);
    printf("\n%d",abso);
}
