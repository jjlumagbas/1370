#include <iostream>    

using namespace std;

class Course {
  public:
    string code;
    string number;
    string title;
    int hours;

    Course(string a_code, string a_number, string a_title, int a_hours) {
      code = a_code;
      number = a_number;
      title = a_title;

      if (a_hours > 0) {
        hours = a_hours;
      } else {
        hours = 0;
      }
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
  Course c1("CSCI", "1370", "Engineering Computer Science I", 3);

  cout << c1.to_string() << endl;
  cout << c1.collegiate_level() << endl;

  return 0;
}