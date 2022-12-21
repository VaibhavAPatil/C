/*
WAP to print given number in reverse order.
*/
#include <stdio.h>

int main() {
    // Write C code here
    int n, remainder, reverse = 0;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    
    while (n!=0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    
    printf("Reverse Number Is : %d", reverse);

    return 0;
}
