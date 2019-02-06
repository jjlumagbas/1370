;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname 1370-exam-1-review) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define CM-PER-INCH 2.54)

; 8

(define (inches->cm in)
  (/ in CM-PER-INCH))


(define (inches->cm in)
  (* in CM-PER-INCH))


(define (inches->cm 10)
  (* 10 CM-PER-INCH))


(define (inches->cm in)
  (define CM-PER-INCH 2.54)
  (* in CM-PER-INCH))



; 9

(define (swim-now1? temp)
  (cond
    [(>= 80 temp 94) true]
    [else false]))


(define (swim-now2? temp)
  (cond
    [(<= 80 temp 95) true]
    [else false]))


(define (swim-now3? temp)
  (cond
    [(>= 80 temp) true]
    [(< temp 95) true]
    [else false]))


(define (swim-now4? temp)
  (cond
    [(>= temp 95) false]
    [(< temp 80) false]
    [else true]))


(define (swim-now5? temp)
  (<= 80 t 94))

