#include <stdio.h>
int main()
{
    int n = 5;
    int prime = 1;
    int i = 2;
     if (n <= 1) {
        prime = 0; // 0 and 1 are not prime numbers
    } else {
        do {
            if (n % i == 0) {
                prime = 0; // found a factor, not prime
                break;
            }
            i++;
        } while (i < n);
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