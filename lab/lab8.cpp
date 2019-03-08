#include <iostream>
#include <string>
using namespace std;

// Student ID 1: 
// Student ID 2: 

// Design a function that, given a time in 
// 24 hour format, converts it to 12 hour format
// E.g. 1305 -> 1:05 PM

// Do each item below IN ORDER. After completing an 
// item, mark it with an x. (Note: the first item is done!)
//
// TODO:
// [x] Function body for convert_time
// [ ] Tests for convert_time (at least 3)
// [ ] Tests for hour_to_12 (how many to cover all cases?)
// [ ] Function body for hour_to_12
// [ ] Tests for pad_min (how many to cover all cases?)
// [ ] Function body for pad_min
// [ ] Tests for period (how many to cover all cases?)
// [ ] Function body for period





// int -> int
// Converts an hour from 24-hr format to 12-hr format
int hour_to_12(int hour) {
  return hour;
}






// int -> string
// Accepts a minute as a number and produces a string
// of the minute part that is padded with a correct number of 0s.
// E.g. 
//   5 -> "05"
//   0 -> "00"
//  45 -> "45"
string pad_min(int min) {
  return "";
}






// int -> string
// Given the hour in 24-hr format, produces the 
// correct time period, either "AM" or "PM"
string period(int hour) {
  return "";
}






// int int -> string
// Converts a time in 24-hr format to 12-hr format
string convert_time(int hour, int min) {
  return to_string(hour_to_12(hour)) + ":" + pad_min(min) + " " + period(hour);
}

int main() {
  cout << boolalpha;

  cout << "Tests for convert_time:" << endl;
  cout << (convert_time(13, 5) == "1:05 PM") << endl;


  cout << "Tests for hour_to_12:" << endl;


  cout << "Tests for pad_min:" << endl;
  

  cout << "Tests for period:" << endl;



  return EXIT_SUCCESS;

}