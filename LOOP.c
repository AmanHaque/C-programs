// PRINT THE SUM OF FIRST n NATURAL NUMBERS.

#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("sum is %d\n", sum);

//     for(int i=n; i>=1; i--){
//         printf("%d\n", i);
//     }
// }
    
    /*int sum = 0;
    for(int j=n; j>=1; j--){
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);*/

    return 0;
}

