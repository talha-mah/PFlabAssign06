// TASK 03
// Write a program that simulates an ATM pin validation system. The user has 3
// attempts to enter the correct 4-digit pin. If the user fails to 
// enter the correct pin in 3 attempts, the system should lock the account.

#include <stdio.h>
int main(){

int pin, input, count;
printf("Choose the 4 digit-pin: \n");
scanf("%d", &input);
count = 1; 

while (count <= 3)
{
    printf("Enter your pin to access ATM: \n");
    scanf("%d", &pin);
    if (pin == input)
    {
        printf("ACCESS GRANTED \n");
        break;
    }
    else{
        printf("INVALID PIN \n");
        count = count + 1;

        if (count == 4)
        {
            printf("YOUR ACCOUNT IS LOCKED !!!");
        }
        
    }
}

return 0; 

}