#include <iostream>
using namespace std;

int main() {
    int pin, option;
    float balance = 1000.0, deposit, withdraw;

    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin != 1234) {
        cout << "Incorrect PIN.\n";
        return 0;
    }

    do {
        cout << "\n--- ATM Menu ---\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Current Balance: ₹" << balance << "\n";
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> deposit;
                balance += deposit;
                cout << "Updated Balance: ₹" << balance << "\n";
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> withdraw;
                if (withdraw > balance)
                    cout << "Insufficient balance!\n";
                else {
                    balance -= withdraw;
                    cout << "Withdrawal successful. Remaining Balance: ₹" << balance << "\n";
                }
                break;
            case 4:
                cout << "Thank you for using our ATM!\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (option != 4);

    return 0;
}
