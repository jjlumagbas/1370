#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 

class Patient {
  public:
    char sex;
    double height;   // height in m
    double weight;   // weight in kg
};

double bmi(Patient p) {
  return p.weight / (p.height * p.height);
}


// Part 1.1
// Write a class definition for Time, with 2 member variables:
// - hour (an integer representing the hour in 24hr format)
// - min (an integer representing the minute)


// Part 1.2
// In main() below, create 2 instances of Time to represent these:
// - 7:45 AM
// - 1:30 PM


// Part 1.3
// Write a function period() that accepts a Time and returns "AM" or "PM"
// depending on the hour of the day.


// Part 1.4
// In main() use the 2 instance of Time defined in 1.2 to create tests
// for the function period()


// Part 2.1
// Write a class definition for Movie, with these member variables:
// - title
// - running_time (in minutes)
// - genre 


// Part 2.2
// In main() below, create 4 instances of Movie to represent these:
// - Gone With the Wind, 221 minutes, Historical romance
// - Avengers: Endgame, 131 minutes, Superhero
// - 2 more movies, your choice


// Part 2.3
// Write a function ave_runtime() which accepts an array of Movies
// (and the length of the array), and returns the average of the 
// running times of the Movies in the array 


// Part 2.4
// In main(), use the instances of Movies defined in 2.2 and create 
// an array composed of these movies. Use this array to test ave_runtime()



int main () {
  cout << boolalpha;

  Patient p1;
  p1.sex = 'M';
  p1.height = 1.65;
  p1.weight = 54;


  // Note: this is how we test results that are doubles
  cout << ( (bmi(p1) - 19.8347) < 0.0001 ) << endl;

  return 0;
}