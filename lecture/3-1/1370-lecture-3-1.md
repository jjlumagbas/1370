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

|             |                     |
|-------------|---------------------|
| **925-945** | Lab review |
| **945-10**  | `big-bang` and drawing a picture |
| **10-1010** | Counting down |
| **1010-1030** | Responding to key presses |

---

# Lab review

---

# Today

| Time        | Topic                     |
|:-------------|:---------------------|
| **925-945** | Lab review |
| **945-1010**  | `big-bang` and drawing a picture |
| **1010-1020** | Counting down |
| **1020-1030** | Responding to key presses |

---


# Project 1: Happy Pusheen

- Display Pusheen and happiness level
- Countdown for happiness level
- Respond to key presses

---

# Stoplight

- Display light
- Change light based on countdown
- Press a key to pick a light

---

# ~~Stoplight~~ Countdown

- Display countdown
- Decrease number displayed once/second
- Restart on keypress

---

# ~~Stoplight~~ Countdown

- **Display countdown**
- Decrease number displayed once/second
- Restart on keypress

---

# Interactive programs and `big-bang`

- Manage state (of the "world"): set initial state, track state changes
- Render state
- Change state in reponse to events: _event handlers_

--- 

# Interactive programs and `big-bang`

_Discuss_: Pick a popular program and answer these questions:
- What "state" of that program needs to be managed?
- How is state rendered?
- Which events change state?

---

# `big-bang`

- Set initial state (world value)
- Render state

---

Consider a program that has a number world value and a function render that displays the state of the world. Which of the following are valid function definitions for render?

## A. `(define (render w) (+ w 1))`
## B. `(define (render w) (circle w "solid" "green"))`
## C. `(define (render w) (text w 30 "blue"))`
## D. `(define (render w) (text "Hello" w "blue"))	`
## E. More than one of the above

---

# Today

| Time        | Topic                     |
|:-------------|:---------------------|
| **925-945** | Lab review |
| **945-1010**  | `big-bang` and drawing a picture |
| **1010-1020** | Counting down |
| **1020-1030** | Responding to key presses |


---

# ~~Stoplight~~ Countdown

- ~~Display countdown~~
- **Decrease number displayed once/second**
- Restart on keypress

---

# Events

Any "stimulus" or input that the world responds to

# Event handler

Function that describes how state changes in response to an event

---

# Events

- clock ticks
- key presses

---

Consider a program that has a number world value. What are the inputs and outputs of a valid handler for clock ticks?

## A. Number -> Number
## B. Number -> Image
## C. Number Number -> Number
## D. Image -> Number
## E. More than one of the above


---

# Today

| Time        | Topic                     |
|:-------------|:---------------------|
| **925-945** | Lab review |
| **945-1010**  | `big-bang` and drawing a picture |
| **1010-1020** | Counting down |
| **1020-1030** | Responding to key presses |

---

# ~~Stoplight~~ Countdown

- ~~Display countdown~~
- ~~Decrease number displayed once/second~~
- **Restart on keypress**


---

# Events

- clock ticks
- key presses

---

## Vocabulary words:

- world
- state (world value)
- event
- event handlers
- clause

### BSL keywords/operations:

- big-bang
- to-draw
- on-tick
- on-key


---

# Attendance!
# http://bit.ly/1370-1rollcall