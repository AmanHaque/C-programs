//use library functions to calculate the square of a number given by user.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("%f", pow(n, 2));

    return 0;
}