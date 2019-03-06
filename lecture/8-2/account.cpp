#include <iostream>
#include <string>
using namespace std;

/*
Suspended is a bool:
- true
- false
*/

/*
bool fn_suspend(bool is_suspended) {
  if (is_suspended) {
    ...
  } else {
    ...
  }
}
*/

/*
Price is a double:
- [-Inf, balance] - approved
- (balance, +Inf] - not approved
*/


/*
double fn_price(double price, double balance) {
  if (price <= balance) {
    ...
  } else if (price > balance) {
    ...
  }
}
*/

// bool double double -> bool
// Determines whether a charge to a debit
// card is valid given the account suspended status
// and the balance in the account
bool valid_tranxn(bool is_suspended, double price, double balance) {
  if ((not is_suspended) and (price <= balance)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  cout << boolalpha;


  
  return EXIT_SUCCESS;
}