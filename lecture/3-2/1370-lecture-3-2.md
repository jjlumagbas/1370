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
| **9:30 - 9:45**   | `big-bang` quiz            |
| **9:45 - 10:10**  | reading `cond` expressions |
| **10:10 - 10:20** | writing `cond` expressions |
| **10:20 - 10:30** | `big-bang` + `cond`        |

---

# Quiz!

---

```
(define (a x y) 10)

(define (b x) (circle 10 "solid" "blue"))

(define (c x) 10)

(big-bang 10
  [to-draw ...]
  [on-tick ...]
  [on-key ...])
```

Which function is a valid handler for `to-draw`, `on-tick`, and `on-key`?

## D. None of the above
## E. More than one of the above

---

Given these function definitions, write a `big-bang` expression:

```
(define (render state)
  (circle (* state 10) "solid" "blue"))

(define (tock state)
  (- state 1))

(define (key-pressed state key)
  10)
```

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | `big-bang` quiz            |
| **9:45 - 10:10**  | reading `cond` expressions |
| **10:10 - 10:20** | writing `cond` expressions |
| **10:20 - 10:30** | `big-bang` + `cond`        |

---

# Stoplight

- Display light
- Change light based on countdown
- Press a key to pick a light

---

# Conditional expressions: `cond`

_What's the syntax for a `cond` expression?_


---

# `cond` expressions

Syntax:
- `(`
- `cond` keyword
- Clauses: `[Q A]`
- Optional: `[else A]`
- `)`

---

Which of the following is an expression of type boolean?

### A. `(rectangle 50 75 "solid" "blue")`
### B. `(+ 50 75)`
### C. `(string-append "tr" "ue")`
### D. `(< 75 50)`
### E. More than one of the above

---

# Stepping through a `cond`

---

What is the value of the expression `(clicker 7)`? 

```
(define (clicker a-number)
   (cond
    [(< a-number 5) "bim"]
    [(< a-number 10) "bam"]
    [(< a-number 20) "bum"]
    [else "boom"]))
```

### A. "bim"
### B. "bam"
### C. "bum"
### D. "boom"


---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | `big-bang` quiz            |
| **9:45 - 10:10**  | reading `cond` expressions |
| **10:10 - 10:20** | writing `cond` expressions |
| **10:20 - 10:30** | `big-bang` + `cond`        |

---

### How to write a cond:

1. How many **cases** (clauses)?
2. What are the **answer parts** of each clause?
3. What are the **conditions** to get to each of those answers?
	a. Within a number range
    b. Equal to some value

---

Fill in the blanks!

```
(define (mag x)
  (cond 
    [______ ______]
    [______ ______]
    [______ ______]))
```

`else`
`"positive"`
`(< x 0)`
`(> x 0)` 
`"zero"`
`"negative"`

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | `big-bang` quiz            |
| **9:45 - 10:10**  | reading `cond` expressions |
| **10:10 - 10:20** | writing `cond` expressions |
| **10:20 - 10:30** | `big-bang` + `cond`        |


---

# Stoplight

- Display light
- Change light based on countdown
- Press a key to pick a light


---

# Attendance!
# http://bit.ly/1370-1rollcall