#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 

int find(int arr[], int length, int n) {
  for (int i = 0; i < length; i++) {
    if (arr[i] == n) {
      return i;
    }
  }
  return -1;
}

bool contains_offset(int arr1[], int length1, int arr2[], int length2, int start_j) {
  for (int i = 0, j = start_j; i < length1; i++, j++) {
    if (arr1[i] != arr2[j]) {
      return false;
    }
  }
  return true;
}


bool is_contained(int arr1[], int length1, int arr2[], int length2) {

  for (int j = 0; j < length2; j++) {
    if (arr2[j] == arr1[0]) {
      if (contains_offset(arr1, length1, arr2, length2, j) == true) {
        return true;
      }
    }
  } 
  
  return false;
}




int main () {
  cout << boolalpha;

  int a[3] = {1, 2, 3};
  int b[3] = {1, 2, 3};
  int c[4] = {0, 1, 2, 3};
  int d[4] = {1, 1, 2, 3};

  cout << (is_contained(a, 3, b, 3) == true) << endl;
  cout << (is_contained(a, 3, c, 4) == true) << endl;
  cout << (is_contained(a, 3, d, 4) == true) << endl;

  
  cout << endl;

  return 0;
}