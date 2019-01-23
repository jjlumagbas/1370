<!--
$theme: gaia
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

|             |                     |
|-------------|---------------------|
| **925-945** | Lab review and Syllabus updates |
| **945-10**  | Intro: 2 hard things |
| **10-1010** | Named constants |
| **1010-1030** | Functions |

---

# There are only two hard things in Computer Science: cache invalidation and naming things.

Phil Karlton, Netscape

---

# Reading exercises

---

# Programs are meant to be read by humans and only incidentally for computers to execute.

Abelson & Sussman, Structure and Interpretation of Computer Programs

---


# Today

|             |                     |
|-------------|---------------------|
| **925-945** | Lab review and Syllabus updates |
| **945-10**  | Intro: 2 hard things |
| **10-1010** | Named constants |
| **1010-1030** | Functions |


---

##### NAMED CONSTANTS
# Named expressions

## `(define PI 3.14)`

---

# Statement

Another basic unit of text: ~~represents a value~~ produces an "effect" (changes the state of the "world")

### Expression

Basic unit of text in a programming language: represents a value

---

# Statement

Another basic unit of text, ~~represents a value~~ produces an "effect" (changes the state of the "world")

## `(require 2htdp/image)`

---

##### NAMED CONSTANTS
# Named expressions

## `(define PI 3.14)`

---

## `(define PI 3.14)`

_What's the syntax for a named constant definition?_

---

## `(define <name> <expr>)`

_What's the syntax for a named constant definition?_

_What's a valid name?_

> A name or a variable is a sequence of characters, not including a space or one of the following: 
> 
> " , ' ` ( ) [ ] { } | ; #:

https://htdp.org/2018-01-06/Book/i1-2.html#%28counter._%28figure._fig~3alex-beginner%29%29

---

Which of the below is a valid name?

## A. VAL OF PI
## B. "VAL"
## C. (pi)
## D. val-of-pi?
## E. More than one of the above

---

```
(define PI 3.14)
(define VAL <expr>)
```

Which of the below can legally replace `<expr>`?

## A. (+ 5 2)
## B. "VAL"
## C. PI
## D. "PI"
## E. More than one of the above

---

```
(require 2htdp/image)

(define doorknob (circle 3 "solid" "yellow"))
(define door (overlay/align "right" "center"
                            doorknob
                            (rectangle 15 25 "solid" "brown")))

(define roof-big (triangle 40 "solid" "red"))
(define roof-small (triangle 30 "solid" "red"))
(define roof (beside/align "bottom" roof-big roof-small))

(define main  (rectangle 70 40 "solid" "black"))

(define house (overlay/align "center" "bottom" door
                (above roof main)))

house
```


---


# Today

|             |                     |
|-------------|---------------------|
| **925-945** | Lab review and Syllabus updates |
| **945-10**  | Intro: 2 hard things |
| **10-1010** | Named constants |
| **1010-1030** | Functions |



---

##### NAMED EXPRESSIONS WITH VARIABLES
# Functions

`(define doorknob (circle 3 "solid" "yellow"))`

vs

`(define (doorknob color) (circle 3 "solid" color))`

---

```
(define (fn-name param1 param2) body-expr)


(fn-name "a" "b")
```

*What's the syntax of a function definition?*

- Function header (name, parameters)
- Function body

*What's the syntax of a function call?*

- Arguments

---

Identify the function name, parameter, argument, body and call

```
(define (f n)
  (* n n))
  
(f 5)
```
#### A. `(f 5)`
#### B. `5`
#### C. `f`	
#### D. `n`
#### E. `(* n n)`

---

What is the value of the following function call?

```
(define (calculate w x y)
  (+ x (+ w 1) 3))
  
(calculate 3 2 0)
```

#### A. 5
#### B. 9
#### C. 0
#### D. 3
#### E. None of the above

---

What is the value of the following expression?

```
(define (double x)
  (* 2 x))
  
(Double 3)
```

#### A. 6
#### B. 9
#### C. 0
#### D. 3
#### E. None of the above

---

```
(define (double x)
  (* 2 x))

(define (double y)
  (* y y))
  
(double 3)
```

#### A. 6
#### B. 9
#### C. 0
#### D. 3
#### E. None of the above


---

```
(define (double x)
  (* 2 x))

(define (square x)
  (* x x))
  
(double 3)
(square 5)
```

#### A. 6 9
#### B. 6 25
#### C. 10 25
#### D. 10 9
#### E. None of the above


---

```
(define (house clr)
  (overlay/align "center" "bottom" door
                 (above roof
                        (rectangle 70 40 "solid" clr))))

```

---

# Attendance!
# http://bit.ly/1370-1rollcall