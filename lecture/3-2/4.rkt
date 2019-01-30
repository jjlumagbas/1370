;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |4|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)


(define (a x y) 10)

(define (b x) (circle 10 "solid" "blue"))

(define (c x) 10)

(big-bang 10
  [to-draw ...]
  [on-tick ...]
  [on-key ...])