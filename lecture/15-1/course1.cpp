#include <iostream>    

using namespace std;

class Course {
  public:
    string code;
    string number;
    string title;
    int hours;
};

string course_to_string(Course c) {
  return c.code + " " + c.number + " - " + c.title;
}

string collegiate_level(Course c) {
  if (c.number[0] == '1') {
    return "Freshmen";
  } else if (c.number[0] == '2') {
    return "Sophomore";
  } else if (c.number[0] == '3') {
    return "Junior";
  } else if (c.number[0] == '4') {
    return "Senior";
  } else {
    return "";
  }
}

int total_hours(Course courses[], int length) {
  int total = 0;
  for (int i = 0; i < length; i++) {
    total += courses[i].hours;
  }
  return total;
}

int main () {
  cout << boolalpha;

  Course c1;
  c1.code = "CSCI";
  c1.number = "1370";
  c1.title = "Engineering Computer Science I";
  c1.hours = 3;

  cout << course_to_string(c1) << endl;
  cout << collegiate_level(c1) << endl;

  Course c2;
  c2.code = "CSCI";
  c2.number = "1170";
  c2.title = "Engineering Computer Science I Lab";
  c2.hours = 1;

  Course courses[2] = {c1, c2};

  cout << total_hours(courses, 2) << endl;

  return 0;
}