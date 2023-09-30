//write a function to count the number of odd numbers in an array

#include<stdio.h>

int countOdd(int arr[], int n);

int main() {
    
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){ //odd
            count++;
        }
    }
}


