#include <iostream>    
#include <fstream>   

using namespace std;

// Student ID 1:
// Student ID 2: 

// What I've done: 
// 1. main
// 2. code to read the files

// All you need to do: 
// 1. Replace the below definition of contains_word with your
//    actual function definition
// 2. Replace values of WORDS_FILE and PUZZLE_FILE 
//    with full file paths
// 3. Run the program 
// 4. Compare your results with results.txt to see if they match.


bool contains_word(char puzzle[], int length, string word) {
  return false;
}

// Accepts the file name and initializes the puzzle array,
// reading the number of characters corresponding 
// to the length of the array
//
// Returns true if successful, false otherwise
bool load_puzzle(string file, char puzzle[], int length) {
  ifstream input_file;
  input_file.open(file);     

  if (input_file.is_open()) {
    for (int i = 0; i < length; i++) {
      input_file >> puzzle[i];
    }
    input_file.close();        
    return true;
  } else {
    return false;
  }
}

const int WORD_LENGTH = 4;


int find_words(string words_file, char puzzle[], int length) {
  ifstream input_file;
  input_file.open(words_file);     

  string word;
  input_file >> word;

  int count = 0;
  
  while (input_file.good()) { 
    if ((word.length() >= WORD_LENGTH) and contains_word(puzzle, length, word)) {
      cout << word << endl;
      count++;
    }

    input_file >> word;
  }         

  input_file.close();        
  return count;
}


const string WORDS_FILE = "words.txt";
const string PUZZLE_FILE = "puzzle.txt";
// Puzzle length: how many characters in puzzle
const int LENGTH = 1600;

int main () {
  cout << boolalpha;

  char puzzle[LENGTH];

  bool load_puzzle_success = load_puzzle(PUZZLE_FILE, puzzle, LENGTH);
  if (load_puzzle_success) {
    cout << "Puzzle successfully loaded from file." << endl;
  } else {
    cout << "Error loading puzzle from file." << endl;
    return 0;
  }

  int count = find_words(WORDS_FILE, puzzle, LENGTH); 
  cout << "Found " << count << " words" << endl;

  return 0;
}