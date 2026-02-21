#include <iostream>
using namespace std;


class bank {
private:
  double balance = 1546.98;
public:
  double deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
    cout << "New Balance: " << balance << endl;    
    return balance;
  }
  double withdraw(double amount) {
    if (amount > balance) {
      cout << "Insufficient funds!" << endl;
      return balance;
    } else {
      balance -= amount;
      cout << "Withdrew: " << amount << endl;
      cout << "New Balance: " << balance << endl;    
      return balance;
    }
  } 
};

int main() {
    bank myBank;
    myBank.deposit(765.43);
    myBank.withdraw(5000.0);
    return 0;
}