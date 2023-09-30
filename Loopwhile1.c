//PRINT THE NUMBERS FROM 0 TO n, IF n IS GIVEN BY USER.

#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int i = 0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
    return 0;
}