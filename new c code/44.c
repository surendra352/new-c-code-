#include <stdio.h>
int main()
{
    int n = 5;
    int prime = 1;
    int i=2;
        while( i < n){
        if (n > 1 || n > 0)
        {
            prime = 1;
        }
        i++;
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime && n > 1)
    {
        printf("%d that is prime number\n", n);
    }
    else
    {
        printf("%d that is not prime number\n", n);
    }
    return 0;
}