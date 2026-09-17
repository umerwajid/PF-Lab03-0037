#include<stdio.h>
int main(){
    int t;
    printf("Enter Time:\n (Please enter time in the format of 24 hours (5 for 5 PM))");
    scanf("%d",&t);
    if(t>=5 && t<=11){
        printf("good morning\n");
    }
     else if(t>=12 && t<=18){
        printf("good evening\n");
    }
    
       else if(t>=19 && t<=23){
        printf("good night\n");
    }
        else if(t>=0 && t<=4){
        printf("midnight .. so jaao please\n");
    }
     else{
        printf("Invalid time\n");
     }
    
    
    return 0;
}