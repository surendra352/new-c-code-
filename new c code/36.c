#include<stdio.h>

int main(){
    int n=5;
    for (int i = 10; i; i--)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
    printf("the table is done!");
    return 0;
}