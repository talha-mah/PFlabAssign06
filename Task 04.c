// TASK 04
// Write a program to check whether a number is an Armstrong number or not. 
// An Armstrong number is a number that is equal to the sum of cubes of its digits.
// Example: 

#include <stdio.h>
#include <math.h>

int main (){

    int num, digione, digitwo, digithree,amsnum; 
    printf("Enter the number: ");
    scanf("%d", &num);
    digione = num/100;      
    digitwo = num/10;
    digitwo = digitwo % 10; 
    digithree = num % 10; 
    amsnum = pow(digione,3) + pow(digitwo,3) + pow(digithree,3); 
    printf("Your numbers are %d, %d, %d \n", digione, digitwo, digithree);
    printf("The ARMSTRONG NUMBER is: %d", amsnum); 

return 0; 

}