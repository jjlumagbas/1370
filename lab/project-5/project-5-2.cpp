#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


// Student ID 1:
// Student ID 2:

// Part 1: Replace the class definition for Review with your
// class definition (including member functions) from 5-1

// Part 2: Copy over your definition for word_ave_score 

// Part 3: Using the Review array defined in main(), write 5 tests
//   for word_ave_score. Don't forget to change the value of FILENAME.


// Part 1: REPLACE THIS CLASS DEFINITION
class Review {
  public:
    int rating;
    string text;

  Review() {
    rating = 0;
    text = "";
  }
};
// REPLACE THIS CLASS DEFINITION


// Part 2: ADD YOUR DEFINITION for word_ave_score here



bool load_reviews(string filename, Review reviews[], int length) {
  ifstream file;
  file.open(filename);

  if (!file.good()) {
    return false;
  }

  for (int i = 0; i < length; i++) {
    string line;
    getline(file, line);

    Review review;
    review.rating = line[0] - '0';
    review.text = line.substr(1);

    reviews[i] = review;
  }

  file.close();
  return true;
}

const int LINES = 8529;
const string FILENAME = "moviereviews.txt"; // CHANGE THIS

int main() {
  cout << boolalpha;

  Review reviews[LINES];
  load_reviews(FILENAME, reviews, LINES);

  // Part 3: Using the Review array defined in main(), write 5 tests
  //   for word_ave_score. Don't forget to change the value of FILENAME.

  return EXIT_SUCCESS;
}
