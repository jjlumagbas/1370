#include <iostream>
using namespace std;

class Circle {
  public:
    int x;
    int y;
    int radius;
};


int main() {
  cout << boolalpha;

  Circle c1;

  c1.x = 5;
  c1.y = 2;
  c1.radius = 4;

  cout << c1.x << endl;
  cout << c1.y << endl;
  cout << c1.radius << endl;

  return EXIT_SUCCESS;
}
