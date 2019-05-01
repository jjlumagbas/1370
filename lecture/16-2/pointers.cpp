#include <iostream>
using namespace std;

void display_arr(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;
  }
}


int main() {
  cout << boolalpha;


  int nums[3] = {100, 200, 300};
  display_arr(nums + 1, 2);
  // cout << nums << endl;
  // cout << *nums << endl;
  // cout << nums[0] << endl;
  // cout << *(nums + 1) << endl;
  // cout << nums[1] << endl;

 
  int a = 1;
  int b = 2;
  int c = 3;
  double d = 4.0;

  int* a_p = &a;
  double* d_p = &d;

  // cout << a << endl;
  // cout << &a << endl;
  // cout << a_p << endl;
  // cout << a_p - 1 << endl;
  // cout << &b << endl;

  // cout << *(a_p - 1) << endl;
  // cout << b << endl;

  // *(a_p - 1) = 20;
  // cout << b << endl;
  // // cout << *a_p << endl;

  // cout << c << endl;
  // cout << *(a_p - 2) << endl;
  // *a_p = 10;

  // cout << a << endl;
  // cout << *a_p << endl;
  // cout << b << endl;
  // cout << c << endl;
  // cout << &c << endl;
  // cout << d << endl;
  // cout << &d << endl;

  return EXIT_SUCCESS;
}
