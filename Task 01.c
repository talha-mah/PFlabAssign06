// Task 01
// Create a program that takes a value and adds it to a variable and prints it
// repeatedly until the user enters a zero value.

#include <stdio.h>
int main(){

    int num, sum;
    sum = 0;    
    do
    {
        printf("Enter your number: ");
        scanf("%d", &num);
        sum = sum + num; 
        printf("Sum is %d \n", sum);
    } 
    while (num != 0);

    printf("Program Terminated! - You have entered zero");
    return 0;    
}


// Why this loop system [D0-WHILE] is better for user input??
// Since there is no limit to counter values, the program iterates itself 
// by taking user input until it is terminated by entering an abnormal value 
// which in this case is zero. 

