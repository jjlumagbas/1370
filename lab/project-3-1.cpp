#include <iostream>
#include <string>
using namespace std;

// Student ID 1: 
// Student ID 2: 

// Design a function that shifts a given alphabetic character
// down the alphabet a given number of times (the key)
// E.g.
//   A (with shift of 1) -> B 
//   A (with shift of 2) -> C
//   B (with shift of 2) -> D
//   z (with shift of 2) -> b
//   a (with shift of -2) -> y
//
// The shift should work for uppercase and lowercase characters,
// and for positive or negative numbers.
//
// If the given character is not an alphabetic character, return
// the original (unshifted) character.

// IMPT: In main, write a complete set of tests for shift_letter

// HINT: Consider helper functions to handle different cases

// HINT: Some useful built-in functions in main() below


// char int -> char
// Shifts an alphabetic character by key number of times
char shift_letter(char ch, int key) {
  return ch;
}


int main() {
  cout << boolalpha;

  cout << (isalpha('A') == true) << endl;
  cout << (isupper('A') == true) << endl;
  cout << (islower('A') == false) << endl;
  cout << (islower('a') == true) << endl;
  cout << (tolower('A') == 'a') << endl;
  cout << (toupper('a') == 'A') << endl;

  cout << char ('A' + 1) << endl;


  cout << "Tests for shift_letter:" << endl;
  cout << (shift_letter('A', 2) == 'C') << endl;


  return EXIT_SUCCESS;

}