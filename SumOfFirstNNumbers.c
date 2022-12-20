// . Write a Program to Calculate Eum Of N Odd Numbers
#include <stdio.h>

int main() {
    int N, i, sum=0;
    printf("Enter a N Number: ");
    scanf("%d", &N);
    
    for(i=1; i<=N; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf(" Sum Of Odd Numbers Is : %d",sum);

    return 0;
}
