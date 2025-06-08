#include <stdio.h>


void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main() {
    
    int choice = 0;
    float balance = 0.0f;

    // Display welcome message
    printf("Welcome to the C Banking Program!\n");
    printf("This program will help you manage your banking transactions.\n");

    // Main menu loop

    do{
        printf("\nMain Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please enter your choice (1-4): ");
        
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                checkBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                checkBalance(balance);
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }

    } while (choice != 4);

    // End of program
    printf("Thank you for using the C Banking Program!\n");

    return 0;
}


void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);

}
float deposit(){

    float amount = 0.0f;
    printf("Enter the amount to deposit: $ ");
    scanf("%f",&amount);
    if (amount <= 0){
        printf("Invalid deposit amount. Please enter a positive value.\n");
        return 0.0f; // Return 0 if the deposit is invalid
    } else {
        printf("You have successfully deposited $%.2f\n", amount);
        return amount; // Return the valid deposit amount
    }
}

float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter the amount to withdraw: $ ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid withdrawal amount. Please enter a positive value.\n");
        return 0.0f; // Return 0 if the withdrawal is invalid
    } else if (amount > balance) {
        printf("Insufficient funds. You cannot withdraw more than your current balance of $%.2f\n", balance);
        return 0.0f; // Return 0 if there are insufficient funds
    } else {
        printf("You have successfully withdrawn $%.2f\n", amount);
        return amount; // Return the valid withdrawal amount
    }
}