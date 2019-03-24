#include <iostream>    

using namespace std;

// 0123456789
void one() {
  for (int i = 0; i < 10; i++) {
    cout << i;
  }
}

// 56789
void two() {
  for (int i = 0; i < 10; i++) {
    cout << i;
  }
}

// 01234
void three() {
  // for ( ;  ; ) {
  //   cout << i;
  // }
}

// 12345678910  
void four() {
  // for () {
  //   cout << i;
  // }
}

// 10987654321  
void five() {

}

// 0246810 
void six() {

}

// 102030405060708090
void seven() {

}

// 5 4 3 2 1 0 -1 -2 -3 -4 -5 
void eight() {

}

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
  seven();
  cout << endl;
  eight();
  cout << endl;

  return 0;
}