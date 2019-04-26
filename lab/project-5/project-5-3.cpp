#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


// Student ID 1:
// Student ID 2:

// EXTRA CREDIT! 
// Modify 5-2 so that you find the score of a whole review, instead of just 
// a single word.
// 
// Input: a file containing a review, each word/character separated by a space (review.txt)
// Ouput: the predicted score of the review

// To solve this, you'll need an additional function review_score which 
// opens and reads a file, and produces the average score for all words in the file.
// 
// Here's a similar function that takes each word from a file and prints it to the screen:
void display_file(string filename) {
  ifstream file;
  file.open(filename);

  while (file.good()) {
    string word;
    file >> word;
    cout << word << endl;
  }

  file.close();
}


int main() {
  cout << boolalpha;

  display_file("review.txt");

  return EXIT_SUCCESS;
}
