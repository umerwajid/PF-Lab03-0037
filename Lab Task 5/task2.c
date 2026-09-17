#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 1st Number:\n");
    scanf("%d",&num1);
    printf("Enter 2nd Number:\n");
    scanf("%d",&num2);
    printf("Enter 3rd Number:\n");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("Number '%d' is the greatest",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("Number '%d' is the greatest",num2);
    }
    else if (num3>num1 && num3>num2){
        printf("Number '%d' is the greatest",num3);
    }
    else {
         printf("Please enter 2 different numbers");
    }
}