#include<stdio.h>

int main(){
    int product=1;
    int n=4;
    int i=1;
    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("the factoral number in 4%d=%d\n",n,product);
    return 0;
}