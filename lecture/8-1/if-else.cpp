#include <iostream>
#include <string>
using namespace std;

char letter_grade(double grade) {

  if (grade >= 90) { return 'A'; }
  else if (grade >= 80) { return 'B'; }
  else if (grade >= 70) { return 'C'; }
  else if (grade >= 60) { return 'D'; }
  else { return 'F'; }

}


bool can_swim(double temp) {
  return ((70 <= temp) and (temp <= 85));

  /*
  if ((70 <= temp) and (temp <= 85)) { return true; }
  else { return false; }
  */
}


int main() {
  cout << boolalpha;

  cout << letter_grade(90) << endl;

  cout << can_swim(90) << endl;
  cout << can_swim(80) << endl;
  

  return EXIT_SUCCESS;
}