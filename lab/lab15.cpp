#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 

class Patient {
  public:
    char sex;
    double height;   // height in m
    double weight;   // weight in kg

    Patient(char a_sex, double a_height, double a_weight) {
      sex = a_sex;
      height = a_height;
      weight = a_weight;
    }

    double bmi() {
      return weight / (height * height);
    }
};


// Part 1.1
// Take your class definition for Time from lab14 and write:
// - a constructor
// - a member function period()



// Part 1.2
// In main() below, create 2 instances of Time to represent these:
// - 7:45 AM
// - 1:30 PM
// Use these instances to write tests for period()




// Part 2.1
// Take your class definition for Movie from lab14 and write:
// - a constructor
// - a member function longer(), which accepts another Movie
//     and compares its running time to this Movie. The function
//     then returns the running time of the longer movie


// Part 2.2
// In main() below, create 4 instances of Movie to represent these:
// - Gone With the Wind, 221 minutes, Historical romance
// - Avengers: Endgame, 131 minutes, Superhero
// - 2 more movies, your choice
// Use these instances to write tests for longer()





int main () {
  cout << boolalpha;

  Patient p1('M', 1.65, 54);

  // Note: this is how we test results that are doubles
  cout << ( (p1.bmi() - 19.8347) < 0.0001 ) << endl;

  return 0;
}