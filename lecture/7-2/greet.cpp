#include <iostream>
#include <string>
using namespace std;

string greet(string name) {
  return "Hello " + name + "!";
}

int main() {
  cout << greet("John");
}