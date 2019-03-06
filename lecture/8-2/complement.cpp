#include <iostream>
#include <string>
using namespace std;

/*
PrimaryColor is a string:
- "red"
- "blue"
- "yellow"
*/

// string -> string
// Produces the complement of the given primary color

// stub
/*
string complement(string color) {
  return "";
}
*/

// template
/*
string complement(string color) {
  if (color == "red") {
    ...
  } else if (color == "blue") {
    ...
  } else if (color == "yellow") {
    ...
  }
}
*/


string complement(string color) {
  if (color == "red") {
    return "green";
  } else if (color == "blue") {
    return "orange";
  } else if (color == "yellow") {
    return "violet";
  }
}


int main() {
  cout << boolalpha;

  cout << "Tests for complement:" << endl;
  cout << (complement("red") == "green") << endl;

  
  return EXIT_SUCCESS;
}