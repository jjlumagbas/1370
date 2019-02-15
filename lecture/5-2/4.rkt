;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname |4|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))

(require 2htdp/image)

(define (area img)
  (* (image-height img) (image-width img)))

(define (smaller img1 img2)
  (cond
    [(< (area img1) (area img2)) img1]
    [else img2]))

(define (larger img1 img2)
  (cond
    [(> (area img1) (area img2)) img1]
    [else img2]))

(define (overlay-2 img1 img2)
  (overlay
    (smaller img1 img2)
    (larger img1 img2)))


(overlay-2 (circle 30 "solid" "red") (circle 50 "solid" "green"))
(overlay-2 (circle 30 "solid" "red") (circle 20 "solid" "green"))