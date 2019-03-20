#include <iostream>    
#include <fstream>   

using namespace std;

int main () {
  ifstream input_file;
  input_file.open("in.txt");     

  char c;
  
  while (input_file.get(c)) { 
    cout << c;
  }         

  input_file.close();        

  return 0;
}