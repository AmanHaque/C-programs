#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a, &b);

    c=a;
    a=b;
    b=c;

    printf("After swapping the value of a and b is : %d and %d\n", a, b);
    return 0;
}