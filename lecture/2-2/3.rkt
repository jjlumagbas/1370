;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname |3|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
 (require 2htdp/image)


(define doorknob (circle 3 "solid" "yellow"))
(define door (overlay/align "right" "center"
                            doorknob
                            (rectangle 15 25 "solid" "brown")))

(define roof-big (triangle 40 "solid" "red"))
(define roof-small (triangle 30 "solid" "red"))
(define roof (beside/align "bottom" roof-big roof-small))
  
(define main (rectangle 70 40 "solid" "black"))

(define (house clr)
  (overlay/align "center" "bottom" door
                 (above roof
                        (rectangle 70 40 "solid" clr))))

(house "black")