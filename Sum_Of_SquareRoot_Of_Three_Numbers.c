// Sum Of Square Root Of Three Numbers

#include <stdio.h>
#include <math.h>

int main() {
double num1, num2, num3, sum;
    // Write C code here
    printf("Enter Any Three Numbers: ");
    
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    
    sum = sqrt(num1) + sqrt(num2) + sqrt(num3);
    
    printf("%.2lf",sum);

    return 0;
}
