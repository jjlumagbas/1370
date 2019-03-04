#include <iostream>
#include <string>
using namespace std;

// Student ID 1: 
// Student ID 2: 

// For each signature + purpose:
// 1. write an appropriate function definition 
//   (use the function name given in the signature)
// 2. inside main(), write 2 function calls for the function


// f_to_c: double -> double
// Converts a temperature from Fahrenheit to Celsius
double f_to_c(double f) {
  return (f - 32) * (5.0 / 9);
}


// greet: string -> string
// Produces a greeting for the given name
string greet(string name) {
  return "Hello " + name + "!";
}


// square: int -> int
// Produces the square of the given number



// in_to_ft: double -> double
// Converts a given length in inches to feet 



// full_name: string string string -> string
// Accepts a person's first, middle, and last name
// and produces the full name, family name first.
// E.g. Doe, John Herbert



// img_area: int int -> int
// Given an image width and height, calculate
// the area of an image



// circ_area: double -> double
// Calculates the area of a circle, given the radius



// pizza_cost: double double -> double
// Calculates the cost per square inch of a circular 
// pizza, given its diameter and price.
// HINT: price / area = cost per square inch
// HINT2: Use circ_area as a helper function



// coffee_order: int -> double
// Calculates the cost of an order for coffee beans, 
// given the number of pounds coffee ordered.
// Coffee costs $10.50 a pound plus the cost of shipping. 
// Shipping costs $0.86 per pound + $1.50 fixed cost. 





int main() {
  cout << f_to_c(75) << endl;
  cout << f_to_c(32) << endl;

  cout << greet("John") << endl;
  cout << greet("Lucy") << endl;


}