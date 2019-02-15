;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname complement) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

; Design a function that accepts a primary color
; and produces the complement of that color

#|
x Read problem statement, write wishlist
x Data definitions
x Signature, purpose, stub
x Examples
x Template
x Function body
x Test and debug
|#


; PrimaryColor is one of:
; - "red"
; - "blue"
; - "yellow"

; PrimaryColor -> String
; Accepts a primary color, and produces a string
; that represents the complement of that color

; Stub
;(define (complement color)
; "")

; Template
#|
(define (complement color)
  (cond
    [(string=? color "red") ...]
    [(string=? color "blue") ...]
    [(string=? color "yellow") ...]))
|#


(define (complement color)
  (cond
    [(string=? color "red") "green"]
    [(string=? color "blue") "orange"]
    [(string=? color "yellow") "purple"]))


(check-expect (complement "red") "green")
(check-expect (complement "blue") "orange")
(check-expect (complement "yellow") "purple")











