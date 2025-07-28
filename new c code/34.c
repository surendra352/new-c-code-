#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if (i==5)
        {
            continue;;
        }
        printf("tish is %d\n",i);
    }
    printf("tish for loop done!");
}