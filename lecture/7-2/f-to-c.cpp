#include <iostream>
using namespace std;

double f_to_c(double f) {
  return (f - 32) * (5.0 / 9); 
}

int main() {
  cout << f_to_c(75);
}