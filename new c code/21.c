#include <stdio.h>

int main() {
    int income;
    float tex=0;
    printf("Enter the income\n:");
    scanf("%d",&income);
    if(income<=250000){
        tex=0;
    }
    else if (income>250000 && income<500000){
        tex=0.05*(income-250000);
    }
    else if(income>500000 && income<1000000){
        tex=0.05*(500000-250000)+0.2*(income-500000);
    }
    else{
        tex=0.05*(500000-250000)+0.2*(income-500000)+0.3*(income-1000000);
    }
    printf("the total text you need to%d\n",tex);
    return 0;
}
    