//write a function to convert celsius to fahrenheit.
// f=(c*9/5)+32

#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float far = convertTemp(32);
    printf("far : %f", far);
    return 0;
}

//recursive function
float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}