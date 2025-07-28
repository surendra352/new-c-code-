#include<stdio.h>

int main(){
    int a=1 ,b=1;
    printf("the value of a and b %d\n",a&&b);
    printf("the a or b value %d\n",a||b);
    printf("the value is not true and false %d\n",!a);
    if(a&&b){
        printf("both are true\n");
    }
    if(a){
        if (b)
        {
            printf("both are true\n");
        }
        
    }

}