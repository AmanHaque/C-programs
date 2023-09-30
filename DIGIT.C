#include<stdio.h>
int main(){
    int count,n,a;
    printf("Enter a number");
    scanf("%d", &n);

    a=n;
    count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("The number of digits in %d is %d" ,a,count);
    return 0;
}
