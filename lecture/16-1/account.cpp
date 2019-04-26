#include <iostream>
using namespace std;

class Account {
  public:
    int id;
    double balance;

    Account(int i, double b) {
      id = i;
      balance = b;
    }

    void deposit(double amt) {
      balance = balance + amt;
    }

    void withdraw(double amt) {
      balance = balance - amt;
    }

    // transfer: Account, double -> void
    // Transfers the amount specified from this account to the 
    // dest account provided
    void transfer(Account dest, double amt) {
      withdraw(amt);
      dest.deposit(amt);
    }
};


int main() {
  cout << boolalpha;

  Account a(1, 300);
  Account b(2, 200);

  a.transfer(b, 300);

  cout << a.balance << endl;
  cout << b.balance << endl;

  return EXIT_SUCCESS;
}
