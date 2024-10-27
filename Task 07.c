// TASK 07
// Write a program that uses a for loop to calculate the factorial of a number
// entered by the user. Factorial of n is the product of all positive integers less than or
// equal to n (i.e., n! = n × (n - 1) × ... × 1)


#include <stdio.h>
int main(){

    int num, factorial,i; 
    factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
    factorial = factorial * i; 
    }

    printf("The factorial of %d is %d", num, factorial); 
    return 0;
}