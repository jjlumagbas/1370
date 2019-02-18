;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname composing-templates) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

; Day is a Number:
; - [1, 1] - Sunday (not available)
; - [2, 5] - M-Th (available)
; - [6, 7] - F-Saturday

(define (fn-day day)
  (cond
    [(<= 2 day 5) ...]
    [else ...]))

; Hour is a Number:
; - [0, 10] - Not available
; - [11, 13] - Available
; - [14, 23] - Not available

(define (fn-hour hour)
  (cond
    [(<= 11 hour 13) ...]
    [else ...]))


(define (available? day hour)
  (cond
    [(<= 2 day 5) (cond
                    [(<= 11 hour 13) true]
                    [else false])]
    [else (cond
            [(<= 11 hour 13) false]
            [else false])]))


; Suspended is a boolean:
; - true
; - false

(define (fn-suspend suspended?)
  (cond
    [suspended? ...]
    [else ...]))

; Price is a number
; [-Inf, balance] - approved
; (balance, +Inf] - not approved

(define (fn-price price balance)
  (cond
    [(<= price balance) ...]
    [else ...]))


(define (approve? suspended? price balance)
  (cond
    [suspended? (cond
                  [(<= price balance) true]
                  [else false])]
    [else (cond
            [(<= price balance) false]
            [else false])]))


; PrimaryColor is either one of:
; - "red"
; - "blue"
; - "yellow"

(define (fn-color color)
  (cond
    [(string=? color "red") ...]
    [(string=? color "blue") ...]
    [(string=? color "yellow") ...]))


(define (mix-colors clr1 clr2)
  (cond
    [(string=? clr1 "red") (cond
                              [(string=? clr2 "red") "red"]
                              [(string=? clr2 "blue") "violet"]
                              [(string=? clr2 "yellow") "orange"])]
    [(string=? clr1 "blue") (cond
                               [(string=? clr2 "red") "violet"]
                               [(string=? clr2 "blue") "blue"]
                               [(string=? clr2 "yellow") "green"])]
    [(string=? clr1 "yellow") (cond
                                  [(string=? clr2 "red") "orange"]
                                  [(string=? clr2 "blue") "green"]
                                  [(string=? clr2 "yellow") "yellow"])]))




; Gender is either:
; "m" - male
; "f" - female

(define (fn-gender gender)
  (cond
    [(string=? gender "m") ...]
    [(string=? gender "f") ...]))

; MaleAge is a Number
; (-Inf, 20]
; [21, 29]
; [30, +Inf)

(define (fn-male-age age)
  (cond
    [(<= age 20) ...]
    [(<= 21 age 29) ...]
    [(<= 30 age) ...]))


; FemaleAge is a Number
; (-Inf, 20]
; [21, +Inf)


(define (fn-female-age age)
  (cond
    [(<= age 20) ...]
    [(<= 21 age) ...]))


; Tickets is a Number

(define (fn-tickets tickets)
  (... tickets))


(define (premium gender age tickets)
  (cond
    [(string=? gender "m") (cond
                                [(<= age 20) (+ 1500 (* 200 tickets))]
                                [(<= 21 age 29)  (+ 1200 (* 100 tickets))]
                                [(<= 30 age)  (+ 1000 (* 100 tickets))])]
    [(string=? gender "f")  (cond
                                   [(<= age 20) (+ 1200 (* 200 tickets))]
                                   [(<= 21 age) (+ 1000 (* 100 tickets))])]))

