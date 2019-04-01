#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 



bool contains(int arr[], int length, int n) {
  for (int i = 0; i < length; i++) {
    if (arr[i] == n) {
      return true;
    }
  }
  return false;
}


bool all_positive(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    if (arr[i] <= 0) {
      return false;
    }
  }
  return true;
}


int min(int arr[], int length) {
  int result = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] < result) {
      result = arr[i];
    } 
  }
  return result;
}


bool is_sorted(int arr[], int length) {
  for (int i = 0; i < length - 1; i++) {
    if ((arr[i] < arr[i + 1]) == false) {
      return false;
    }
  }
  return true;
}


int main () {
  cout << boolalpha;
  
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {1, 2, -3, 4, 5};

  cout << contains(arr1, 5, 4) << endl;
  cout << contains(arr1, 5, 6) << endl;
  
  cout << all_positive(arr1, 5) << endl;
  cout << all_positive(arr2, 5) << endl;
  
  cout << min(arr1, 5) << endl;
  cout << min(arr2, 5) << endl;

  
  cout << is_sorted(arr1, 5) << endl;
  cout << is_sorted(arr2, 5) << endl;

  
  cout << endl;

  return 0;
}