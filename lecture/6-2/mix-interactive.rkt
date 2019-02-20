;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname mix-interactive) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)
(require 2htdp/universe)


(define BG (rectangle 400 200 "solid" "white"))

; GameState is a struct
(define-struct game [color1 color2])

; PrimaryColor is either one of:
; - "red"
; - "blue"
; - "yellow"

; PrimaryColor PrimaryColor -> String
; Produce the mix of two primary colors
(define (mix-colors clr1 clr2)
  (cond
    [(string=? clr1 "red") (cond
                              [(string=? clr2 "red") "red"]
                              [(string=? clr2 "blue") "purple"]
                              [(string=? clr2 "yellow") "orange"]
                              [else "white"])]
    [(string=? clr1 "blue") (cond
                               [(string=? clr2 "red") "purple"]
                               [(string=? clr2 "blue") "blue"]
                               [(string=? clr2 "yellow") "green"]
                               [else "white"])]
    [(string=? clr1 "yellow") (cond
                                  [(string=? clr2 "red") "orange"]
                                  [(string=? clr2 "blue") "green"]
                                  [(string=? clr2 "yellow") "yellow"]
                                  [else "white"])]
    [else "white"]))


; String Image -> Image
; Produces an image of a square with the given color
; that is overlaid on the given image, aligned to the left
(define (show-left color img)
  (overlay/align "left" "middle"
                 (square 200 "solid" color)
                 img))


; String Image -> Image
; Produces an image of a square with the given color
; that is overlaid on the given image, aligned to the right
(define (show-right color img)
  (overlay/align "right" "middle"
                 (square 200 "solid" color)
                 img))


; String Image -> Image
; Produces an image of a square with the given color
; that is overlaid on the given image
(define (show-mid color img)
  (overlay (square 200 "solid" color) img))


; String String -> Image
; Produces an image of two squares side by side with the given colors
; with a third square (with color when the two is mixed) overlaid on top
(define (show-mix color1 color2)
  (show-mid (mix-colors color1 color2) (show-left color1 (show-right color2 BG))))


; GameState -> Image
; Shows a picture of the current world state
(define (render state)
  (show-mix (game-color1 state) (game-color2 state)))


; GameState String -> GameState
; Given a key press, produce the corresponding world state
(define (key-pressed state key)
  (cond
    [(string=? key "r") (make-game "red" (game-color2 state))]
    [(string=? key "b") (make-game "blue" (game-color2 state))]
    [(string=? key "y") (make-game "yellow" (game-color2 state))]
    [(string=? key "R") (make-game (game-color1 state) "red")]
    [(string=? key "B") (make-game (game-color1 state) "blue")]
    [(string=? key "Y") (make-game (game-color1 state) "yellow")]
    [else state]))


(big-bang (make-game "white" "white")
  (to-draw render)
  (on-key key-pressed))


