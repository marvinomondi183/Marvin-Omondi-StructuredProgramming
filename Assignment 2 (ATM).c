#include <stdio.h>
#include <stdlib.h>

// FUNCTION PROTOTYPES
int login();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);


int main() {
    int choice;
    float balance = 1000.0;   // Initial balance

    //  LOGIN FIRST
    if (!login()) {
        printf("\nToo many failed attempts! Access Denied.\n");
        return 0;
    }

    //  ATM MENU LOOP
    do {
        printf("\n====== ATM MENU ======\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 4);   //  Repeat until Exit

    return 0;
}

//  LOGIN FUNCTION (3 ATTEMPTS ONLY)
int login() {
    int pin, attempts = 0;
    int correctPIN = 1234;

    while (attempts < 3) {
        printf("\nEnter your PIN: ");
        scanf("%d", &pin);

        if (pin == correctPIN) {
            printf("Login successful!\n");
            return 1;  // True
        } else {
            attempts++;
            printf("Wrong PIN! Attempts left: %d\n", 3 - attempts);
        }
    }
    return 0;  // False
}

//  BALANCE FUNCTION
void checkBalance(float balance) {
    printf("\nCurrent Balance: Ksh %.2f\n", balance);
}

//  DEPOSIT FUNCTION WITH VALIDATION
float deposit(float balance) {
    float amount;
    printf("\nEnter deposit amount: ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit Successful!\n");
    } else {
        printf("Invalid amount! Must be positive.\n");
    }

    return balance;
}

//  WITHDRAW FUNCTION WITH VALIDATION
float withdraw(float balance) {
    float amount;
    printf("\nEnter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Must be positive.\n");
    }
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    }
    else {
        balance -= amount;
        printf("Withdrawal Successful!\n");
    }

    return balance;
}
