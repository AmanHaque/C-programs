#include<stdio.h>
int main(){
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    // if ( marks > 30 && marks <= 100) {
    //     printf("PASS\n");
    // } else if ( marks <= 30 && marks >= 0) {
    //     printf("FAILS\n");
    // } else {
    //     printf("WRONG MARKS");
    // }

    marks <= 30 ? printf("FAIL\n") : printf("PASS\n");
    return 0;
}
    