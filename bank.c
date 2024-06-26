#include <stdio.h>

typedef struct {
    int account_number;
    double balance;
} Account;

void deposit(Account *account, double amount) { account->balance += amount; }

void withdraw(Account *account, double amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
    }
}

double get_balance(Account *account) { return account->balance; }

int main() {
    Account user1 = {123456, 1000.0};  // 1000 + 500 - 2000 = -500
    Account user2 = {654321, 2000.0};  // 2000 - 1500 = 500

    // transactions
    withdraw(&user2, 1500.0);

    deposit(&user1, 500.0);
    withdraw(&user1, 2000.0);

    // display balance
    printf("User 1 balance: %.2f\n", get_balance(&user1));
    printf("User 2 balance: %.2f\n", get_balance(&user2));

    return 0;
}

/*Ожидаем
User 1 balance: -500.00
User 2 balance: 500.00
*/

/* Получаем
User 1 balance: 1500.00
User 2 balance: 500.00
*/