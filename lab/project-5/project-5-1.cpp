#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


// Student ID 1:
// Student ID 2:


// Note: For each part, I've labelled the code at the line where your answer should go

// 1.1: Write a constructor for Review
// 1.2: In main() create 3 instances of Review using this
//  constructor. See moviereview.txt for examples

// 2.1 Write 3 tests for word_score in main() below 
// 2.2 Fill in the function definition of the function word_score(). 

// 3.1 Using instances of Review created in 1.2, create an array
//   of Reviews, and write 3 tests for word_ave_score in main() below 
// 3.2 Fill in the function definition of the function word_ave_score(). 

class Review {
  public:
    int rating;
    string text;

    // 1.1: Write a constructor for Review


    bool text_contains(string word) {
      return text.find(word) < text.length();
    }

    // 2.2 Fill in the function definition of this 
    // function word_score(). 
    //
    // word_score: string -> int
    // Returns the score for this review if the given word
    // can be found in the review text. If the word isn't 
    // in the text, returns 0. 
    // (Hint: use text_contains above to determine this).
    int word_score(string word) {
      return 0;
    }
};

// 3.2 Fill in the function definition of this 
// function word_ave_score(). 
//
// word_ave_score: Review[], int, string -> double
// For each Review in the array, retrieves the score of the given word
// using word_score and computes the average of those scores
// (Note: Don't count a score if it's 0! That just means the word isn't in the text.)
double word_ave_score(Review reviews[], int length, string word) {
  return 0;
}


int main() {
  cout << boolalpha;

  // 1.2: In main() create 3 instances of Review using this
  //  constructor. See moviereview.txt for examples


  // 2.1 Write 3 tests for word_score in main() below 


  // 3.1 Using instances of Review created in 1.2, create an array
  //   of Reviews, and write 3 tests for word_ave_score in main() below 

  return EXIT_SUCCESS;
}
