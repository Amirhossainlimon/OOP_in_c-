#include <iostream>
#include <string>
using namespace std;

class BankAccount {

private:
   double balance;
    string pin;

public:

    BankAccount(string p) {
        pin = p;
        balance = 0;
        cout << "Account created" << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    else {
        cout << "Invalid withdraw amount" << endl;
        }
    }

    double getBalance(string enteredPin) {
        if (enteredPin == pin) {
            return balance;
        }
      else {
        cout << "Incorrect Pin!" << endl;
            return -1;
        }
    }


};

int main() {

    BankAccount account("162004");

    account.deposit(10000);

    cout << "Balance: " << account.getBalance("162004") << endl;

    account.withdraw(2500);

    cout << "Balance after withdraw: " << account.getBalance("162004") << endl;

    return 0;
}
