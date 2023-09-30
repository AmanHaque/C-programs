#include<stdio.h>
int main(){
    int display(int* a, int* b);
    int main() {
        int a=5, b=10, sum;
        printf("the numbers are %d%d", a, b);
        sum = display(&a,&b);
        printf("the ans is %d", sum);
    }
    return 0;
}