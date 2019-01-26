;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname countdown-working) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)

(define (show-countdown state)
  (text (number->string state) 200 "blue"))

(define (countdown state)
  (- state 1))

(big-bang 10
  [to-draw show-countdown]
  [on-tick countdown])