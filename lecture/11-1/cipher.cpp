#include <iostream>    
#include <fstream>   

using namespace std;

char shift_upper(char ch, int key) {
  if ((ch + key) < 'A') {
    return ('Z' + 1) - ('A' - (ch + key));
  } else if ((ch + key) > 'Z') {
    return ('A' - 1) + ((ch + key) - 'Z');
  } else {
    return ch + key;
  }
}



// char int -> char
// Shifts an alphabetic character by key number of times
char shift_letter(char ch, int key) {
  if (isalpha(ch)) {
    if (islower(ch)) {
      return tolower(shift_upper(toupper(ch), key));
    } else {
      return shift_upper(ch, key);
    }
  } else {
    return ch;
  }
}



int main () {
  ifstream input_file;
  input_file.open("source.txt");     

  ofstream output_file;
  output_file.open("secret.txt");

  char c;
  while (input_file.get(c)) { 
    output_file << shift_letter(c, -15);
  }         

  input_file.close();        
  output_file.close();      

  return 0;
}