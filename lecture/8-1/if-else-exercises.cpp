#include <iostream>
#include <string>
using namespace std;

/*
(define (letter-grade g)
  (cond
    [(>= g 90) "A"]
    [(>= g 80) "B"]
    [(>= g 70) "C"]
    [(>= g 60) "D"]
    [else "F"]))
*/

char letter_grade(double g) {
  if (g >= 90) { 
    return 'A'; 
  } else if (g >= 80) { 
    return 'B'; 
  } else if (g >= 70) { 
    return 'C'; 
  } else if (g >= 60) { 
    return 'D'; 
  } else { 
    return 'F'; 
  }
}

// Rearrange the lines of the following C++ functions
//   so they correspond to the BSL functions.

/*
(define (bump-up g)
  (cond
    [(string=? g "A") "A"]
    [(string=? g "B") "A"]
    [(string=? g "C") "B"]
    [(string=? g "D") "C"]
    [(string=? g "F") "D"]))
*/

/*
string bump_up(string g) {

  if (g == "A") {
  } else if (g == "B") {
  } else if (g == "C") {
  } else if (g == "D") {
  } else if (g == "F") {
  }

    return "A";
    return "A";
    return "B";
    return "C";
    return "D";
}
*/

/*
(define (ph p)
  (cond
    [(<= 0 p 6) "acid"]
    [(= p 7) "neutral"]
    [(<= 8 p 14) "base"]))
*/

/*
string ph(double p) {
  } else if () {
  } else if () {
  if () {
  }
  
  8 <= p and p <= 14
  p == 7
  0 <= p and p <= 6
  
    return "neutral";
    return "acid";
    return "base";
}
*/

int main() {
  cout << boolalpha;

  cout << letter_grade(90) << endl;

  return EXIT_SUCCESS;
}