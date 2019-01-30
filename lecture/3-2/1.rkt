;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |1|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)

(define (render state)
  (circle (* state 10) "solid" "blue"))

(define (tock state)
  (- state 1))

(define (key-pressed state key)
  10)


(big-bang 10
  [to-draw render]
  [on-tick tock 1]
  [on-key key-pressed])