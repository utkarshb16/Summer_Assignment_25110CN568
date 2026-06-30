#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin) {
        printf("Invalid PIN!\n");
        return 0;
    }

    do {
        printf("\n------ ATM MENU ------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful!\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank You for using the ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}