#include <iostream>    
#include <fstream>   

using namespace std;

int main () {  
  
  ofstream output_file;
  output_file.open("out.txt");

  output_file << "hello";
  output_file << endl;
  output_file << "world";

  output_file.close();      

  return 0;
}