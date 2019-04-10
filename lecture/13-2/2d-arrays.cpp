#include <iostream>    

using namespace std;

const int ROW = 3;
const int COL = 5;


void row(int arr[ROW][COL], int r) {
  for (int j = 0; j < COL; j++) {
    cout << arr[r][j] << " ";
  }
}

void col(int arr[ROW][COL], int c) {
  for (int i = 0; i < ROW; i++) {
    cout << arr[i][c] << " ";
  }
}

void row_wise(int arr[ROW][COL]) {
  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      cout << arr[i][j] << " ";
    }
  }
}

void col_wise(int arr[ROW][COL]) {
  for (int j = 0; j < COL; j++) {
    for (int i = 0; i < ROW; i++) {
      cout << arr[i][j] << " ";
    }
  }
}


int main () {
  cout << boolalpha;

  int arr[ROW][COL] = {
    {10, 20, 30, 40, 50},
    {100, 200, 300, 400, 500},
    {1000, 2000, 3000, 4000, 5000}
  };

  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  row(arr, 2);
  cout << endl;
  col(arr, 2);
  cout << endl;

  row_wise(arr);
  cout << endl;
  col_wise(arr);

  return 0;
}