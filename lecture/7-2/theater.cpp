#include <iostream>
using namespace std;

 /*
(define (attendees ticket-price)
  (- 120 (* (- ticket-price 5.0) (/ 15 0.1))))
*/
double attendees(double ticket_price) {
  return 120 - ((ticket_price - 5.0) * (15 / 0.1));
}

/*
(define (revenue ticket-price)
  (* ticket-price (attendees ticket-price)))
*/
double revenue(double ticket_price) {
  return ticket_price * attendees(ticket_price);
}

/*
(define (cost ticket-price)
  (+ 180 (* 0.04 (attendees ticket-price))))
*/
double cost(double ticket_price) {
  return 180 + (0.04 * attendees(ticket_price));
}

/*
(define (profit ticket-price)
  (- (revenue ticket-price)
     (cost ticket-price)))
*/
double profit(double ticket_price) {
  return revenue(ticket_price) - cost(ticket_price);
}

int main() {
  cout << profit(1) << endl;
  cout << profit(2) << endl;
  cout << profit(3) << endl;
  cout << profit(4) << endl;
  cout << profit(5) << endl;
}