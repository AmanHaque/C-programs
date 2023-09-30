// PRINT 1(true) or 0(false) FOR FOLLOWING STATEMENTS:
/* (a) if it's sunday & it's snowing
   (b) if it's monday or it's raining
   (c) if a number is greater than 9 & less than 100.*/
//(a)
   #include<stdio.h>
   int main(){
        /*int isSUNDAY=1, isSNOWING=1;
        printf("%d\n", isSUNDAY && isSNOWING);
        return 0;*/
//(b)
        /*int isMONDAY=0, isRAINING=1;
        printf("%d\n", isMONDAY || isRAINING);
        return 0;*/
//(c)
        int x;
        printf("enter number : ");
        scanf("%d", &x);
        printf("%d\n", x>9 && x<100);
        return 0;
   }