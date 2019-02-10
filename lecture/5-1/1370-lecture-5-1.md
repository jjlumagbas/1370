<!--
footer: CMPE/CSCI 1370 - 01
-->


# Computer Science I
#### CMPE/CSCI 1370 - 01

<br>
<br>
<br>
<br>


---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Design recipe review       |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:10**  | Enumerations               |
| **10:10 - 10:30** | Intervals                  |
| **10:30 - 10:40** | Examples                   |


---

# Design recipe

1. 
2. **Signature, purpose, stub**
3. **Examples**
4. 
5. **Function body**
6. 

---

Design a function that pluralizes a given word. For simplicity you may assume that just adding s is enough to pluralize a word.

Which of the following purpose statements is best?

### A. `; Pluralize s.`
### B. `; Produce plural string.`
### C. `; Add "s".`
### D. `; Produce the given string with "s" added to the end.`

---

Which of the following are appropriate examples?

```
;; String -> String
;; Produce the given string with "s" added to the end.
  
(define (pluralize str) "")  ;stub
```

#### A. `(check-expect (pluralize "cat") "s")`
#### B. `(check-expect (pluralize "cat") "cat")`
#### C. `(check-expect (pluralize "dog") "dogs")`
#### D. `(check-expect (pluralize "grass") "grasss")`
#### E. More than one of the above

---

Which part of the partially-completed design is inconsistent from the rest?

```
;; Image -> String                                     [A]
;; produce the aspect ratio (width/height) of an image [B]
(check-expect 
  (aspect-ratio (rectangle 20 30 "solid" "blue")) 
  (/ 2 3))                                            ;[C]
(check-expect 
  (aspect-ratio (square 10 "solid" "blue")) 
  1)                                                  
(check-expect 
  (aspect-ratio (rectangle 30 20 "solid" "blue")) 
  3/2)

; define (aspect-ratio img) 0) ;stub                   [D]
```

---

Which part of the partially-completed design is inconsistent from the rest?

```
;; String -> Boolean                                   [A]
;; produce true if string length is 0                  [B]
(check-expect (empty-string? "") true)                ;[C]
(check-expect (empty-string? 0) false)
(check-expect (empty-string? "abc") false)

;(define (empty-string? s) true) ;stub                 [D]

(define (empty-string? s)                             ;[E]
  (zero? (string-length s)))
```

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Design recipe review       |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:10**  | Enumerations               |
| **10:10 - 10:30** | Intervals                  |
| **10:30 - 10:40** | Examples                   |

---

# Next project: Rock, paper, scissors

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Design recipe review       |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:10**  | Enumerations               |
| **10:10 - 10:30** | Intervals                  |
| **10:30 - 10:40** | Examples                   |

---

# Today: Traffic lights + design recipe

---

# Design recipe

1. 
2. **Signature, purpose, stub**
3. **Examples**
4. 
5. **Function body**
6. 

---

# Design recipe

1. **Data definitions**
2. Signature, purpose, stub
3. Examples
4. **Template**
5. Function body
6. 

---

# Structure of the DATA 
# -> 
# Structure of the FUNCTION

---


ENUMERATIONS

# Traffic lights v1

## Just the light

Wishlists!

---

# ENUMERATIONS

## fixed set of values

---

# Data definitions and templates: Enumerations


- Day of the week
- Letter grade
- Primary color

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Design recipe review       |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:10**  | Enumerations               |
| **10:10 - 10:30** | Intervals                  |
| **10:30 - 10:40** | Examples                   |



---

INTERVALS

# Traffic lights v2

## Numbers for lights

---

# INTERVALS

## number ranges

---

# Data definitions and templates: Intervals

- Temperature (cold, just right, hot)
- Hour of day (morning, afternoon, evening)
- Electromagnetic spectrum

---

# Data definitions and templates: Intervals

- Temperature (cold, just right, hot)
- Hour of day (morning, afternoon, evening)
- Electromagnetic spectrum

![](http://gsp.humboldt.edu/OLM/Courses/GSP_216_Online/images/visible-table.png)

--- 

ATOMIC

# Traffic lights v2

## Countdown

---

# Enumeration

- fixed set of values

# Interval

- number ranges

# Atomic

- no conditional behavior

---

# Structure of the DATA 
# -> 
# Structure of the FUNCTION

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Design recipe review       |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:10**  | Enumerations               |
| **10:10 - 10:30** | Intervals                  |
| **10:30 - 10:40** | Examples                   |


---

## A. Atomic / B. Enumeration / C. Interval 


1. Produce the complement of a given primary color
2. Given a month of the year, return the season
3. Convert a temperature from F to C
4. Classify an image as either small, medium, or large based on its area
5. Guess the season based on the temperature
6. Determine if a ph level is acidic, basic, or neutral
7. Produce an appropriate greeting, given the hour of the day


---

# Attendance!
# http://bit.ly/1370-1rollcall