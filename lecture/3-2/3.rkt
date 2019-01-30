;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |3|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)

(define (render state)
  (rotate state (star 200 "solid" "red")))

(define (tock state)
  (+ state 10))

(define (key-pressed state key)
  (- state 10))


(big-bang 0
  [to-draw render]
  [on-tick tock 0.5]
  [on-key key-pressed])