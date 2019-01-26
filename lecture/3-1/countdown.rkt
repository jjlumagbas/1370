;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname countdown) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)



(define (render state)
  (overlay (text (number->string state) 100 "blue")
           (square 300 "outline" "black")))


(define (countdown state)
  (- state 1))


(define (reset state key-pressed)
  10)

(big-bang 10
  [to-draw render]
  [on-tick countdown 1]
  [on-key reset])