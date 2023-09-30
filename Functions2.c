//Write a function that prints NAMASTE if user is indian and BONJOUR if user is french.
#include<stdio.h>

void namaste();
void bonjour();

int main(){
    printf("enter f for french anf i for Indian : ");
    char ch;
    scanf("%c", &ch);   

    if(ch == 'i'){
        namaste();
    } else {
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("namaste\n");
}

void bonjour(){
    printf("bonjour\n"); 
}