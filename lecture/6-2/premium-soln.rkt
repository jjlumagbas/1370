;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname premium-soln) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

; Gender is either:
; "M" - Male
; "F" - Female

(define (fn-gender gender)
  (cond
    [(string=? gender "M") ...]
    [(string=? gender "F") ...]))

; MaleAge is a Number:
; (-Inf, 21]
; [21, 29]
; [30, +Inf)
(define (fn-male-age age)
  (cond
    [(<= age 20) ...]
    [(<= 21 age 29) ...]
    [(<= 30 age) ...]))

; FemaleAge is a Number:
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
    [(string=? gender "M") (cond
                             [(<= age 20)  (+ 1500 (* 200 tickets))]
                             [(<= 21 age 29)  (+ 1200 (* 100 tickets))]
                             [(<= 30 age) (+ 1000 (* 100 tickets))])]
    [(string=? gender "F")  (cond
                              [(<= age 20)  (+ 1200 (* 200 tickets))]
                              [(<= 21 age)  (+ 1000 (* 100 tickets))])]))

  
(define (premium gender age tickets)
   (cond
    [(and (string=? gender "M") (<= age 20)) (+ 1500 (* 200 tickets))]
    [(and (string=? gender "M") (<= 21 age 29)) (+ 1200 (* 100 tickets))]
    [(and (string=? gender "M") (<= 30 age)) (+ 1000 (* 100 tickets))]
    [(and (string=? gender "F") (<= age 20)) (+ 1200 (* 200 tickets))]
    [(and (string=? gender "F") (<= 21 age)) (+ 1000 (* 100 tickets))]))



  