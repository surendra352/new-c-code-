#include <stdio.h>
int main()
{
    int n = 1;
    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n > 1 || n > 0)
        {
            prime = 1;
        }

        if (n % i == 0)
        {
            prime = 0;
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