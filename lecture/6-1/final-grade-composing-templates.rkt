;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname final-grade-composing-templates) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
; - Produce the letter grade for 1370 given raw average and exam average

#|
x Read problem statement, write wishlist
x Data definitions
x Signature, purpose, stub
x Examples
x Template
x Function body
x Test and debug
|#


; NumberGrade is a Number:
; -
; -

; NumberGrade -> LetterGrade
; <purpose>
(define (number->letter grade)
  (cond
    [(<= 90 grade) "A"]
    [(<= 80 grade) "B"]
    [(<= 70 grade) "C"]
    [(<= 60 grade) "D"]
    [else "F"]))


(check-expect (number->letter 90) "A")

; RawAveGrade is a Number
; (-Inf, 69] - Exam ave rule doesn't apply
; [70, +Inf) - Exam ave rule applies

(define (fn-raw-ave raw-ave)
  (cond
    [(<= raw-ave 69) ...]
    [else ...]))


; ExamGrade is a Number:
; (-Inf, 69] - Students gets a D max
; [70, +Inf) - Raw average applies


(define (fn-exam-grade exam-ave)
  (cond
    [(<= exam-ave 69) ...]
    [else ...]))

; RawAveGrade ExamGrade -> NumberGrade
; <purpose>

(define (apply-exam-ave raw-ave exam-ave)
  (cond
    [(<= raw-ave 69) raw-ave]
    [else (cond
            [(<= exam-ave 69) 69]
            [else raw-ave])]))

#|
(define (apply-exam-ave raw-ave exam-ave)
  (cond
    [(<= raw-ave 69)  (cond
                        [(<= exam-ave 69) raw-ave]
                        [else raw-ave])]
    [else (cond
             [(<= exam-ave 69) 69]
             [else raw-ave])]))
|#

(define (apply-exam-ave raw-ave exam-ave)
  (cond
    [(or (<= raw-ave 69) (<= 70 exam-ave)) raw-ave]
    [else 69]))




(check-expect (apply-exam-ave 90 80) 90)
(check-expect (apply-exam-ave 55 70) 55)
(check-expect (apply-exam-ave 90 65) 69)

(check-expect (apply-exam-ave 55 65) 55)




; RawAveGrade ExamGrade -> LetterGrade
(define (final-grade raw-ave exam-ave)
  (number->letter (apply-exam-ave raw-ave exam-ave)))




(check-expect (final-grade 90 80) "A")
(check-expect (final-grade 55 70) "F")
(check-expect (final-grade 90 65) "D")


