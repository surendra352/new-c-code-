#include<stdio.h>

int main(){
    int a=4,b=8,c=165,d=20;
    if(a>b  && a>c && a>d){
        printf("the bigast number tish list: %d",a);
    }
  else if(a<b  && b>c && b>d){
        printf("the bigast number tish list: %d",b);
    }
   else if(c>a  && c>b && c>d){
        printf("the bigast number tish list: %d",c);
    }
    else if(d>a  && d>b && d>c){
        printf("the bigast number tish list: %d",d);
    }
    return 0;
}