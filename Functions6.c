#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad); 
float rectangleArea(float a, float b);
float triangleArea(float x, float y );
int main(){
    float a, b, rad, side, x, y;
    
    printf("Enter the side of square : ");
    scanf("%f", &side);
    printf("square area is :%f\n", squareArea(side));
    
    printf("Enter the radius of circle : ");
    scanf("%f", &rad);
    printf("circle area is :%f\n", circleArea(rad));
    
    printf("Enter the side of rectangle : ");
    scanf("%f%f", &a,&b);
    printf("rectangle area is :%f\n", rectangleArea(a,b));

    printf("Enter the height and base : ");
    scanf("%f%f", &x, &y);
    printf("traingle area is :%f\n", triangleArea(x,y));
    
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}

float triangleArea(float x, float y){
    return 0.5 * x * y;
}