// PRINT ALL THE ODD NUMBERS FROM 5 TO 50.

/*#include<stdio.h>
int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 == 0 ) {   //SKIP
            continue;
        }
        printf("%d\n", i);
   }
   return 0;
}*/

#include<stdio.h>
int main() {
    for(int i=5; i<=50; i++) {
        if(i % 2 != 0) {   
           printf("%d\n", i);    
        }
        
   }
   return 0;
}