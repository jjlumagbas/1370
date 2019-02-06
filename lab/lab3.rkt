;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname lab3) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)

; Student ID 1:
; Student ID 2:


; Part 1: Below this function definition, write 3 function calls
; that each produce a different result. Then, write a 4th function
; call that produces this error: "cond: all question results were false"
; (Comment out that 4th function call before proceeding)

; BONUS: Step through each of the function calls by clicking
; Step above instead of Run. Narrate each step of the
; evaluation to your partner.

(define (greet-period h)
  (cond
    [(<= 1 h 11) "Good Morning!"]
    [(<= 12 h 17) "Good Afternoon!"]
    [(<= 18 h 24) "Good Evening!"]))


; Part 2: Fill in the blanks from a given set of
; question and answer parts
(define (ph p)
  (cond
    [... ...]
    [... ...]
    [... ...]))

; (<= 8 p 14)
; (<= 0 p 6)
; else

; "acid"
; "neutral"
; "base"


; Part 3: convert-c-to accepts a temperature in Celsius and
; converts to either Fahrenheit or Kelvin depending on the
; given unit ("f" or "k"). If the given unit is neither "f"
; nor "k", just return the temperature in Celsius.

; Fill in the answer parts in the cond expression.

; Celsius to Fahrenheit: (C × 9/5) + 32 = F
; Celsius to Kelvin: C + 273.15 = K

(define (convert-c-to unit temp)
  (cond
    [(string=? unit "f") ...]
    [(string=? unit "k") ...]
    [else ...]))




; Part 4: letter-grade accepts a students number grade and
; produces the equivalent letter grade. Fill in the question
; parts in the cond expression.

; Refer to: https://github.com/jjlumagbas/1370#grading

(define (letter-grade num-grade)
  (cond
    [(...) "A"]
    [(...) "B"]
    [(...) "C"]
    [(...) "D"]
    [else "F"]))



#|
Part 5: Choose your own adventure! Do only one of the below options:
|#

(define (day-lyric day)
  (cond
    [... ...]))


#|
Option 1: day-lyric accepts a day of the week and produces the
corresponding lyric for "Friday I'm in Love" by The Cure.

Fill-in the cond expression of the function.

Example: Here are sample function calls and the expected output

> (day-lyric "Monday")
"I don't care if Monday's blue"
> (day-lyric "Wednesday")
"Tuesday's gray and Wednesday too"

|#

  
#|
Lyrics to "Friday I'm in Love" by The Cure:

I don't care if Monday's blue
Tuesday's gray and Wednesday too
Thursday I don't care about you
It's Friday I'm in love
Saturday wait
And Sunday always comes too late

|#



#|
Option 2: day-lyric accepts a day of the week and produces the
corresponding lyric for "7 days" by Craig David (lyrics below).

Fill-in the cond expression of the function.

Example: Here are sample function calls and the expected output

> (day-lyric "Monday")
"I met this girl on Monday"
> (day-lyric "Friday")
"And on Thursday and Friday and Saturday"

|#

  
#|

Lyrics to "7 days" by Craig David:

I met this girl on Monday
Took her for a drink on Tuesday
We were making love by Wednesday
And on Thursday and Friday and Saturday 
We chilled on Sunday

|#


#|

Option 3: Choose your own song! Song lyrics must contain every
day of the week. (Or most of it, at least.)

Suggestions here:

https://forums.stevehoffman.tv/threads/songs-where-lyrics-run-through-all-days-of-the-week-monday-tuesday-wednesday.183446/

|#