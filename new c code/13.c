#include<stdio.h>

int main(){
    if(1){
        printf("this if executed\n");
    }
    if(1546){
        printf("this if also executed\n");
    }
    if(2.45){
        printf("this  float if executed\n");
    }
    if('j'){
        printf("this char if executed\n");
    }
    if(0){
        printf("this is not if executed\n");
    }
    return 0;
}