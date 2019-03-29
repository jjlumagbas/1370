#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 

bool contains_h(bool result_so_far, int current_element, int n) {
  if (result_so_far == true) {
    return true;
  } else {
    return current_element == n;
  }
}

bool contains(int arr[], int length, int n) {
  bool result = false;
  for (int i = 0; i < length; i++) {
    result = contains_h(result, arr[i], n);
  }
  return result;
}


bool positive_h(bool result_so_far, int current_element) {

}


bool all_positive(int arr[], int length) {

}

int min_h(int result_so_far, int current_element) {

}

int min(int arr[], int length) {

}


bool is_sorted_h(bool result_so_far, int current_element, int next_element) {

}

bool is_sorted(int arr[], int length) {

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