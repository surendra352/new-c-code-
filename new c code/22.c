#include<stdio.h>

int main(){
    int year=52;
    if(year %4==0 && year %100!=0 || year %400==0){
        printf("tish is laep year:");
    }
    else{
        printf("tish is not laep year");
    }
    return 0;
}