#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 


/* For each of the below functions write:
(IMPT! Do these steps in order)
1. A stub
2. (In main) at least 2 tests (different array inputs)
3. Full function definition (comment out the stub)
*/


// contains_word: char[], int, string -> bool
// Accepts a character array and its length, and checks
// if each character of the string can be found in the 
// character array in order

bool is_vowel(char c) {
  return 
    tolower(c) == 'a' ||
    tolower(c) == 'e' ||
    tolower(c) == 'i' ||
    tolower(c) == 'o' ||
    tolower(c) == 'u';
}


int count_vowels(string word) {
  int result = 0;
  for (int i = 0; i < word.length(); i++) {   // This is how we get the length of a string
    if (is_vowel(word[i])) {
      result++;
    }
  }
  return result;
}


int main () {
  cout << boolalpha;

  // Strings can behave like arrays!
  string greet = "Hello";

  // Prints each character of the string,
  // one line each character
  for (int i = 0; i < greet.length(); i++) {   // This is how we get the length of a string
    cout << greet[i] << endl;  // We access single characters of the string same as arrays []
  }
  
  cout << count_vowels("onomatopoeia") << endl;

  return 0;
}