#include<stdio.h>
int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    
    if(age >=  18){
        printf("adult\n");
        printf("they can vote");
    }
    else if(age > 13 && age < 18){
        printf("Teenager\n");
    }
    else{
        printf("child");
    }
    printf("THANK YOU\n");
    return 0;
}