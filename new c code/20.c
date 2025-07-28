#include <stdio.h>

int main() {
    int marks1 ,marks2,marks3;
    printf("Enter the marks: ");
    scanf("%d", &marks1);
    printf("enter the marks:");
    scanf("%d",&marks2);
    printf("enter the marks");
    scanf("%d",&&marks3);
    if(marks1 || marks2 || marks3<33){
        printf("you are filad in marks less than in indivsula marks");
    }
    else if((marks1+marks2+marks3)/3<40){
        printf("you are filad due to less percentg");
    }
    else{
        printf("you are paassed!");
    }
    return 0;
}
