#include<stdio.h>
int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    
    if(age >=  18){
        printf("adult\n");
        printf("they can vote");
    }
    else{
        printf("not adult\n");
    }
    printf("THANK YOU\n");
    return 0;
}