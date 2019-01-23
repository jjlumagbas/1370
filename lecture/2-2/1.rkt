;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname |1|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)



(beside (overlay/align "center" "bottom"
               (overlay/align "right" "center"
                              (circle 3 "solid" "yellow")
                              (rectangle 15 25 "solid" "brown"))
               (above (beside/align "bottom"
                                    (triangle 40 "solid" "red")
                                    (triangle 30 "solid" "red"))
                      (rectangle 70 40 "solid" "black")))

       (overlay/align "center" "bottom"
               (overlay/align "right" "center"
                              (circle 3 "solid" "yellow")
                              (rectangle 15 25 "solid" "brown"))
               (above (beside/align "bottom"
                                    (triangle 40 "solid" "red")
                                    (triangle 30 "solid" "red"))
                      (rectangle 70 40 "solid" "black")))
)