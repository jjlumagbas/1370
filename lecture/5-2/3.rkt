;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname |3|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

(define (add-tax price)
  (+ price (* price .05)))


(define (apply-discount price)
  (cond
    [(>= price 50) (* price .9)]
    [else price]))


(define (discounted-price price)
  (add-tax (apply-discount price)))
