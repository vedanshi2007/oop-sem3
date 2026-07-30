#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // Hidden from direct external access

public:
    // Constructor
    BankAccount() {
        balance = 0;
    }

    // Getter method
    double getBalance() const {
        return balance;
    }

    // Setter method (with validation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
};

int main() {
    BankAccount acc;

    acc.deposit(5000);
    cout << "Balance = " << acc.getBalance() << endl;

    return ;}