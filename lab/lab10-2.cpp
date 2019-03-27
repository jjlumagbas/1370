#include <iostream>    

using namespace std;

// Student ID 1:
// Student ID 2: 

// 12345
void one() {
  int arr[5] = {1, 2, 3, 4, 5};
  cout << arr[0];
  cout << arr[1];
  cout << arr[2];
  cout << arr[3];
  cout << arr[4];
}

// Given this expected output: 12345678910
// 1. Modify the array declaration to be of
//    length 10, initialized with number 1-10 in order
// 2. cout each element to produce the above output
void two() {
  int arr[5] = {1, 2, 3, 4, 5};
  cout << arr[0];
  cout << arr[1];
  cout << arr[2];
  cout << arr[3];
  cout << arr[4];
}

// 1. Declare a char array of size 5, initialized to
//     'a', 'b', 'c', 'd', 'e' in order 
// 2. cout each element to produce this output:
//        abcde
// Don't use a for-loop yet! Access each element individually
void three() {

}


// 1. Declare a char array of size 5, initialized to
//     'a', 'b', 'c', 'd', 'e' in order 
// 2. cout each element to produce this output:
//        abcde
// Use a for loop for this
void four() {

}


// 1. Declare a char array of size 5, initialized to
//     'a', 'b', 'c', 'd', 'e' in order 
// 2. cout each element to produce this output:
//        edcba
// Use a for loop for this
void five() {

}

// 1. Declare a char array of size 10, initialized to
//     the letters 'a'-'j' in order 
// 2. cout each element to produce this output:
//        acegi
// Use a for loop for this
void six() {

}

// cout each element of the given array
void seven(int arr[], int length) {

}

// 1. Define a function named eight, that accepts an 
// int array and it's length, and couts each element
// of the given array *in reverse order*
// 2. Write a function call for eight in main below, passing
// the array arr as argument


int main () {

  one();
  cout << endl;
  two();
  cout << endl;
  three();
  cout << endl;
  four();
  cout << endl;
  five();
  cout << endl;
  six();
  cout << endl;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  seven(arr, 10);
  cout << endl;

  // function call for eight here

  cout << endl;

  return 0;
}