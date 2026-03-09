#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Setter Methods
    void setAccountNumber(int accNo)
    {
        accountNumber = accNo;
    }

    void setAccountHolderName(string name)
    {
        accountHolderName = name;
    }

    void setBalance(double bal)
    {
        balance = bal;
    }

    // Getter Methods
    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        }
        else
        {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw Method
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Display Account Details
    void displayAccountDetails()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    int accNo;
    string name;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    account.setAccountNumber(accNo);
    account.setAccountHolderName(name);
    account.setBalance(initialBalance);

    int choice;
    double amount;

    do
    {
        cout << "\n===== Banking Menu =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 3:
            account.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
