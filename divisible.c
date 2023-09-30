//WAP TO CHECK IF A NUMBER IS DIVISIBLE BY 2 OR NOT.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("%d\n", x % 2 == 0);
    return 0;
}