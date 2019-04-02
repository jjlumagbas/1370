#include <iostream>    

using namespace std;


bool f(int a[], int a_length, int b[], int b_length) {
  if (a_length != b_length) {
    return false;
  } else {
    for (int i = 0; i < a_length; i++) {
      if (a[i] != b[i]) {
        return false;
      }
    }
    return true;
  }
}

int g(int a[], int a_length, int b[], int b_length) {
  int result = 0;
  for (int i = 0; i < a_length; i++) {
    for (int j = 0; j < b_length; j++) {
      if (a[i] == b[j]) {
        result++;
      }
    }
  }
  return result;
}


int main () {
  cout << boolalpha;
  
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {1, 2, -3, 4, 5};
  int arr3[5] = {1, 2, 3, 4, 5};
  int arr4[6] = {2, 1, 3, 4, 5, 6};

  cout << f(arr1, 5, arr2, 5) << endl;

  cout << g(arr1, 5, arr4, 6) << endl;


  
  cout << endl;

  return 0;
}