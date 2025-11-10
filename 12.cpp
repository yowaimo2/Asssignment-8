#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int acc_no;
    double balance;
public:
    BankAccount(string n, int no, double amt) {
        name = n;
        acc_no = no;
        balance = amt;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount" << endl;
        }
    }
    void showBalance() {
        cout << "Account Holder: " << name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Rahul", 1001, 5000);
    acc.showBalance();
    acc.deposit(2000);
    acc.showBalance();
    acc.withdraw(1000);
    acc.showBalance();
    acc.withdraw(8000);
    return 0;
}