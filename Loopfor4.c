//PRINT THE NUMBERS FROM 0 TO n, IF n IS GIVEN BY USER.

#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for(int i = 0; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}