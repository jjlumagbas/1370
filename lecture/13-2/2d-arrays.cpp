#include <iostream>    
using namespace std;

const int ROW = 3;
const int COL = 5;

void row(int arr[ROW][COL], int r) {
  for (int j = 0; j < COL; j++) {
    cout << arr[r][j] << " ";
  }
}


int main () {
  cout << boolalpha;

  int arr[5];

  int arr2d[3][5] = {
    {10, 20, 30, 40, 50},
    {100, 200, 300, 400, 500},
    {1000, 2000, 3000, 4000, 5000}
  };

  cout << arr2d[0][4] << endl;
  cout << arr2d[1][1] << endl;
  cout << arr2d[2][3] << endl;
  cout << arr2d[2][4] << endl;



  // for (int i = 0; i < 3; i++) {
  //   cout << arr2d[i][0] << " ";
  // }
  // cout << endl;

  // for (int j = 0; j < 5; j++) {
  //   cout << arr2d[0][j] << " ";
  // }

  // for (int j = 0; j < 5; j++) {
  //   cout << arr2d[1][j] << " ";
  // }
  
  // for (int j = 0; j < 5; j++) {
  //   cout << arr2d[2][j] << " ";
  // } 

  cout << endl;

  int el = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
       el = arr2d[i][j];
       cout << el << " ";
    } 
  }

  cout << endl;

  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 3; i++) {
       el = arr2d[i][j];
       cout << el << " ";
    } 
  }
  cout << endl;

  row(arr2d, 2);

  return 0;
}