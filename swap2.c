#include<stdio.h>
void swap(int* x, int* y){
    int c = *x;
    *x = *y;
    *y = c;
    return;
}
int main() {
    int a, b;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a, &b);

    swap(&a,&b);

    printf("After swapping the value of a and b is : %d and %d\n", a, b);
    return 0;
}