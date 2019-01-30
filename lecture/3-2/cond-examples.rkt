;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname cond-examples) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

(define (next-season s)
  (cond
    [(string=? s "spring") "summer"]
    [(string=? s "summer") "fall"]
    [(string=? s "fall") "winter"]
    [(string=? s "winter") "spring"]))

(next-season "winter")



(define (clicker a-number)
   (cond
    [(< a-number 5) "bim"]
    [(< a-number 10) "bam"]
    [(< a-number 20) "bum"]
    [else "boom"]))

;(clicker 7)


; Write a function greet-period, which given
; an Hour of day, produces an appropriate greeting

(define (greet-period h)
  (cond
    [(<= 1 h 11) "Good Morning!"]
    [(<= 12 h 17) "Good Afternoon!"]
    [(<= 18 h 24) "Good Evening!"]))



(define (period h)
  (cond
    [(<= 1 h 11) "AM"]
    [(<= 12 h 17) "PM"]
    [(<= 18 h 24) "PM"]))

(define (ph p)
  (cond
    [(<= 0 p 6) "acid"]
    [(<= 8 p 14) "base"]
    [else "neutral"]))


; Write a function that guesses what the temperature
; is right now depending on the season

; Season is either:
; "spring" (75), "summer" (105), "fall" (68), "winter" (55)

(define (temp-guess s)
  (cond
    [(string=? s "spring") 75]
    [(string=? s "summer") 105]
    [(string=? s "fall") 68]
    [(string=? s "winter") 55]))

; Write a function that takes in a season (string)
; and produces the next season (string)





; Write a function that, given a primary color
; produced the complement of that color

; PrimaryColor
; "red", "yellow", "blue"

(define (complement c)
  (cond
    [(string=? c "red") "green"]
    [(string=? c "yellow") "violet"]
    [(string=? c "blue") "orange"]))



