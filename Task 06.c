// TASK 06
// Write a program that simulates a fuel pump. The program asks the user how
// many liters of fuel they want to purchase, calculates the total cost, and prints the
// bill. The loop should run until the user selects the option to stop purchasing fuel.
// Assume the price of fuel is $1.50 per liter.


#include <stdio.h>
int main(){

    int fuel, choice;
    float bill, price;  
    
    do
    {
    printf("How many liters of Fuel? \n");
    scanf("%d", &fuel);
    if (fuel == 0){
        break; 
    }
    else{
    price = fuel * 1.50; 
    }

    bill = bill + price; 
    } while (1);
    
    printf("Your Total bill is $%.2f \nThanks for purchasing the fuel", bill); 
    return 0; 
}