#include <stdio.h>
#include<stdlib.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        (void)scanf_s("%d", &accountNumber);

        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        (void)scanf_s("%f", &beginningBalance);

        printf("Enter total charges: ");
        (void)scanf_s("%f", &totalCharges);

        printf("Enter total credits: ");
        (void)scanf_s("%f", &totalCredits);

        printf("Enter credit limit: ");
        (void)scanf_s("%f", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }

        printf("\n");
    }

}
