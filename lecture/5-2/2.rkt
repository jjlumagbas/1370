;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname |2|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)


(define (overlay-2 img1 img2)
  (cond
    [(<
      (* (image-height img1) (image-width img1))
      (* (image-height img2) (image-width img2))) (overlay img1 img2)]
    [else (overlay img2 img1)]))


(overlay-2 (circle 30 "solid" "red") (circle 50 "solid" "green"))
(overlay-2 (circle 30 "solid" "red") (circle 20 "solid" "green"))