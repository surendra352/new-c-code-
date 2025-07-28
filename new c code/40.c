#include<stdio.h>

int main(){
    int t=8;
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        printf("the 8 table print is %dx%d=%d\n",t,i,t*i);
        sum=sum+ t*i;
    }
    printf("the sum of 8 table is %d\n",sum);
    return 0;
}