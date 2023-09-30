// WAP TO CHECK WHETHER THE NUMBER IS EVEN OR ODD
// even -> 1
// odd -> 0
#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("%d\n", x % 2 == 0);
    return 0;
}