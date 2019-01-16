<!--
$theme: gaia
footer: CMPE/CSCI 1370 - 01
-->

# Computer Science I
#### CMPE/CSCI 1370 - 01 

MW 9:25 am - 10:40 am
<br>
<br>
<br>
### http://bit.ly/votingcards

---

# Today

|             |                     |
|-------------|---------------------|
| **925-930** | [Syllabus highlights](https://github.com/jjlumagbas/1370) |
| **930-945**  | Project demo and specs |
| **945-10**  | How do we write and run programs? |
| **10-1015** | Expressions in BSL |
| **1015-1030** | Images and the image teachpack |

---

# Project 1: Happy Pusheen

---

# Project 1: Happy Pusheen

- Display Pusheen and happiness level
- Countdown for happiness level
- Respond to key presses


---

# Today

|             |                     |
|-------------|---------------------|
| **925-930** | [Syllabus highlights](https://github.com/jjlumagbas/1370) |
| **930-945**  | Project demo and specs |
| **945-10**  | How do we write and run programs? |
| **10-1015** | Expressions in BSL |
| **1015-1030** | Images and the image teachpack |


---

# How do we write and run programs?

---

#### WHAT IS A PROGRAMMING LANGUAGE?	

Arbitrary set of words that represent:

# Data
# Operations
# Control structures

---

```
Pixel : Number
px : Pixel

negative : px -> px * -1

Image : Pixel[40000]
img : Image

negative-img : img -> for each px in img -> negative 

```
- Data
- Operations
- Control structures

---

# What humans can understand

vs

# What computers can understand

---

"Source code"

# `a + b`

vs

"Machine code"

# `000000 10001 10010 01000 00000 100000`

---

# DrRacket environment: interpreter for BSL


---

# Today

|             |                     |
|-------------|---------------------|
| **925-930** | [Syllabus highlights](https://github.com/jjlumagbas/1370) |
| **930-945**  | Project demo and specs |
| **945-10**  | How do we write and run programs? |
| **10-1015** | Expressions in BSL |
| **1015-1030** | Images and the image teachpack |

---

# Vocabulary words!

- Expressions
- Literal values (literals)
- Data types
- Syntax
- Operations
- Arguments
- Evaluate (resolve)
- Sub-expressions

---

# Expression

Basic unit of text in a programming language: represents a value

### Literal values (literals)
### Operations

---

# Literal values

- Numbers
- Strings (text)
- Booleans
- Images

### Data types

---

# Syntax

Rules for writing valid expressions

- _What is the syntax of a negative number?_

- _What is the syntax of a string?_

---

### What is the type of the expression: `"352"`?

# A. number
# B. string
# C. boolean
# D. image
# E. syntax error

---

# Why explicitly distinguish between different types of data?

---

# Expression

Basic unit of text in a programming language: represents a value

### Literal values (literals)
### Operations

---

# Operations

Produces a value, given other **expressions**

### Arguments

Operands provided to an operation

### Evaluation (evaluate, resolve)

Process of producing a value given an expression

---

# Built-in operations

https://docs.racket-lang.org/htdp-langs/beginner.html

---

# Operations

Produces a value, given other **expressions**

### Arguments

Operands provided to an operation

#### _What's the general syntax of an operation?_

---

#### Which of the following is a valid BSL operation whose value is the square root of 36?

## A. (sqrt 36)
## B. sqrt(36)
## C. 6
## D (6)

---

# Operations

Produces a value, given other **sub-expressions**

### Arguments

Operands provided to an operation

### Evaluation

Process of producing a value given an expression

---

# Operations

Produces a value, given other **sub-expressions**

### Arguments

Operands provided to an operation

### Evaluation (evaluate, resolve)

Process of producing a value given an expression

Data type of expression = data type of value

---

##### What is the type of the following expression: 
### `(+ (string-length "hello world") 60)`

## A. number
## B. string
## C. boolean
## D. image
## E. syntax error

---

# Today

|             |                     |
|-------------|---------------------|
| **925-930** | [Syllabus highlights](https://github.com/jjlumagbas/1370) |
| **930-945**  | Project demo and specs |
| **945-10**  | How do we write and run programs? |
| **10-1015** | Expressions in BSL |
| **1015-1030** | Images and the image teachpack |

---

# Images and the image teachpack

https://docs.racket-lang.org/teachpack/2htdpimage.html

https://docs.racket-lang.org/teachpack/2htdpimage-guide.html


---

## With respect to providing arguments to `circle`, what are the ways we can do this incorrectly?

---


## With respect to providing arguments to `circle`, what are the ways we can do this incorrectly?

- wrong number
- wrong order
- wrong type of arguments

---

# Attendance!
# http://bit.ly/1370-1rollcall

## (And photos!)