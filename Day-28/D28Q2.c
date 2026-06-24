// WAP to Create bank account system. 

#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n----- BANK ACCOUNT SYSTEM -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Amount deposited successfully.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", acc.accNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}