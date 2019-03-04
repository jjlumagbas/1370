;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname cond) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(define (letter-grade g)
  (cond
    [(>= g 90) "A"]
    [(>= g 80) "B"]
    [(>= g 70) "C"]
    [(>= g 60) "D"]
    [else "F"]))


(define (swim? temp)
  (cond
    [(<= temp 69) false]
    [(<= 70 temp 85) true]
    [(<= 86 temp) false]))

