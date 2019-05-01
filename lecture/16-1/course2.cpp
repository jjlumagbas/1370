#include <iostream>    

using namespace std;

class Time {
    int hour;
    int min;

  public: 

  string get_period() {
    if (hour < 12) {
      return "AM"
    } else {
      return "PM";
    }
  }



}

class Course {
    string code;
    string number;
    string title;
    int hours;

  public:
    Course(string a_code, string a_number, string a_title, int a_hours) {
      code = a_code;
      number = a_number;
      title = a_title;

      if (a_hours >= 0) {
        hours = a_hours;
      } else {
        hours = 0;
      }
    }
    
    void set_hours(int a_hours) {
      if (a_hours >= 0) {
        hours = a_hours;
      } else {
        hours = 0;
      }
    }

    int get_hours() {
      return hours;
    }
    
    string to_string() {
      return code + " " + number + " - " + title;
    }

    string collegiate_level() {
      if (number[0] == '1') {
        return "Freshmen";
      } else if (number[0] == '2') {
        return "Sophomore";
      } else if (number[0] == '3') {
        return "Junior";
      } else if (number[0] == '4') {
        return "Senior";
      } else {
        return "";
      }
    }

};


int main () {
  cout << boolalpha;

  // Course c1 = Course("CSCI", "1370", "Engineering Computer Science I", 3);
  Course c1("CSCI", "1370", "Engineering Computer Science I", -3);

  // Course c1;
  // c1.code = "CSCI";
  // c1.number = "1370";
  // c1.title = "Engineering Computer Science I";
  // c1.hours = -3; // NO
  c1.set_hours(-3);

  cout << c1.get_hours() << endl;
  cout << c1.to_string() << endl;
  cout << c1.collegiate_level() << endl;

  return 0;
}