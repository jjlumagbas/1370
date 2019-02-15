;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname data-definitions-templates) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
; PrimaryColor is one of:
; - "red"
; - "yellow"
; - "blue"


(define (complement color)
  (cond
    [(string=? color "red") ...]
    [(string=? color "yellow") ...]
    [(string=? color "blue")] ...))



; LetterGrade is one of:
; - "A"
; - "B"
; - "C"
; - "D"
; - "F"


(define (bump-up grade)
  (cond
    [(string=? grade "A") ...]
    [(string=? grade "B") ...]
    [(string=? grade "C") ...]
    [(string=? grade "D") ...]
    [(string=? grade "F") ...]))


; Temperature is a Number:
; (-Inf, 60] - cold
; [61, 75] - fine
; [76, +Inf) - hot


(define (what-to-wear temp)
  (cond
    [(<= temp 60) ...]
    [(<= 61 temp 75) ...]
    [(<= 76 temp) ...]))



; Grade is a Number:
; [90, 100] - A
; [80, 89]  - B
; [70, 79]  - C
; [60, 69]  - D
; [0, 59]   - F


(define (letter-grade grade)
  (cond
    [(<= 90 grade 100) ...]
    [(<= 80 grade 89) ...]
    [(<= 70 grade 79) ...]
    [(<= 60 grade 69) ...]
    [(<= 0 grade 59) ...]))



; Temperature is a Number

(define (f-to-c temp)
  (... temp))