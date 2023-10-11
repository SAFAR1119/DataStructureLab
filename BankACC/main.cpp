#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double accountBalance;
};

BankAccount createAccount() {
    BankAccount newAccount;
    cout << "Enter Account Number: ";
    cin >> newAccount.accountNumber;
    cin.ignore();
    cout << "Enter Account Holder's Name: ";
    getline(cin, newAccount.accountHolderName);
    cout << "Enter Initial Account Balance: $";
    cin >> newAccount.accountBalance;
    return newAccount;
}

void depositMoney(BankAccount& account, double amount) {
    account.accountBalance += amount;
    cout << "Deposited $" << amount << " into Account #" << account.accountNumber << endl;
}

bool withdrawMoney(BankAccount& account, double amount) {
    if (amount <= account.accountBalance) {
        account.accountBalance -= amount;
        cout << "Withdrawn $" << amount << " from Account #" << account.accountNumber << endl;
        return true;
    } else {
        cout << "Insufficient funds in Account #" << account.accountNumber << endl;
        return false;
    }
}

void displayAccount(const BankAccount& account) {
    cout << "Account Details:" << endl;
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder's Name: " << account.accountHolderName << endl;
    cout << "Account Balance: $" << account.accountBalance << endl;
}

int main() {
    BankAccount account;
    bool accountCreated = false;

    int choice;
    double amount;

    do {
        cout << "Bank Account Menu:" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Display account details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (!accountCreated) {
                    account = createAccount();
                    accountCreated = true;
                } else {
                    cout << "An account is already created." << endl;
                }
                break;
            case 2:
                if (accountCreated) {
                    cout << "Enter the amount to deposit: $";
                    cin >> amount;
                    depositMoney(account, amount);
                } else {
                    cout << "Please create an account first." << endl;
                }
                break;
            case 3:
                if (accountCreated) {
                    cout << "Enter the amount to withdraw: $";
                    cin >> amount;
                    withdrawMoney(account, amount);
                } else {
                    cout << "Please create an account first." << endl;
                }
                break;
            case 4:
                if (accountCreated) {
                    displayAccount(account);
                } else {
                    cout << "Please create an account first." << endl;
                }
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
