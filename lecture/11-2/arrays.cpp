#include <iostream>    

using namespace std;


void show_array(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i];
  }
}


int main () {

  int arr[5] = {10, 20, 30, 40, 50};
  cout << arr[0];
  cout << arr[1];
  cout << arr[2];
  cout << arr[3];
  cout << arr[4];
  cout << endl;

  for (int i = 0; i < 5; i++) {
    cout << arr[i];
  }

  cout << endl;

  show_array(arr, 10);

  cout << endl;

  return 0;
}