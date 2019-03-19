#include <iostream>    
#include <fstream>   

using namespace std;

int main () {
  ifstream input_file;
  input_file.open("in.txt");     

  ofstream output_file;
  output_file.open("out.txt");

  char c;
  while (input_file.get(c)) { 
    output_file << c;
  }         

  input_file.close();        
  output_file.close();      

  return 0;
}