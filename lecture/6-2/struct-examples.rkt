;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname struct-examples) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))


(define-struct movie [title producer year])



(define-struct person [name hair eyes phone])


(define-struct student [name id major])

(define-struct pet [name number])

(define RUSTY (make-pet "Rusty" 2))

(define (groom pet)
  ...)