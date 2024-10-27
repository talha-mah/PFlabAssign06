// Task 02
// Create a program that takes a number as input and 
// determines whether it is a prime number or not.

#include <stdio.h>
int main(){
    
    int num, loop; 
    printf("Enter your number:  ");
    scanf("%d", &num);

    for(loop=2; loop < num; loop++){
        if(num % loop == 0){
            printf("The number is not prime");
            break;
        }
        else {
            printf("Number is Prime");
            break;
        }
    }
}


// Prime Number? A number which is only divisible by 1 and the number itself.