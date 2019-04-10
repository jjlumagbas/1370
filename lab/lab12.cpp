#include <iostream>    

using namespace std;

const int ROW = 3;
const int COL = 5;

// Displays a single row r in a 2D array
void row(int arr[ROW][COL], int r) {

}

// Displays a single column c in a 2D array
void col(int arr[ROW][COL], int c) {

}

// Displays the entire 2d array in a single line,
// traversing the array from left to right, top to bottom
void row_wise(int arr[ROW][COL]) {

}

// Displays the entire 2d array in a single line,
// traversing the array from top to bottom, left to right
void col_wise(int arr[ROW][COL]) {

}


int main () {
  cout << boolalpha;

  int arr[ROW][COL] = {
    {10, 20, 30, 40, 50},
    {100, 200, 300, 400, 500},
    {1000, 2000, 3000, 4000, 5000}
  };

  row(arr, 2);
  cout << endl;
  col(arr, 2);
  cout << endl;

  row_wise(arr);
  cout << endl;
  col_wise(arr);

  return 0;
}