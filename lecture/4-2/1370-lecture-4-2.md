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
| **9:30 - 9:45**   | Exam review                |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:00**  | Design recipe              |
| **10:00 - 10:20** | Signature, purpose, stub   |
| **10:20 - 10:30** | Examples                   |

---

# Exam review

---

# What have we learned so far?

- Basic expressions, data types
- Decomposition/composition
- Abstraction: naming things (constants, functions)
- Interactive programs (state, events, handlers)
- Conditional evaluation

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Exam review                |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:00**  | Design recipe              |
| **10:00 - 10:20** | Signature, purpose, stub   |
| **10:20 - 10:30** | Examples                   |

---

# Next project demo


---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Exam review                |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:00**  | Design recipe              |
| **10:00 - 10:20** | Signature, purpose, stub   |
| **10:20 - 10:30** | Examples                   |

---

# Design recipe

---

# `pizzas`
Write a function that calculates how many pizzas to order, given the number of people eating and the maximum number of slices one person can eat. Order only enough pizzas so that there are no leftovers after everyone has eaten. (Assume 8 slices per pizza.)

---

# Design recipe

1. Data definitions
2. Signature, purpose, stub
3. Examples
4. Template
5. Function body
6. Test and debug

---

# Design recipe

1. 
2. **Signature, purpose, stub**
3. **Examples**
4. 
5. **Function body**
6. 

---

# `add-1`

Design a function that produces 1 more than the given number


---

# Design recipe

1. 
2. **Signature, purpose, stub**
3. **Examples**
4. 
5. **Function body**
6. 

---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Exam review                |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:00**  | Design recipe              |
| **10:00 - 10:20** | Signature, purpose, stub   |
| **10:20 - 10:30** | Examples                   |

---

# `initials`

Design a function that produces the initials of a person, given a first, middle, and last name

---

# Signature: inputs -> outputs

A function **consumes / accepts** inputs, **produces / returns** outputs

_What are the signatures for these?_

- convert temperature from F to C
- check if a password meets requirements
- convert a photo to black and white
- determine how many pixels are in an image
- produce initials, given first, middle, last name

---

What's a correct signature for a function that accepts a number, a string, and an image, and produces an image?

## A. `Number String Image <- Image`
## B. `Image -> Number String Image`
## C. `Number String Image -> Image`
## D. `Image Number String Image`
## E. None of the above

---

# Purpose

- Makes the relationship between inputs and outputs meaningful
- Not: just repeats the signature

--- 

# Stub

Naming:

- function
- parameters


---

# Today

| Time              | Topic                      |
|:------------------|:---------------------------|
| **9:30 - 9:45**   | Exam review                |
| **9:45 - 9:50** 	| Next project demo          |
| **9:50 - 10:00**  | Design recipe              |
| **10:00 - 10:20** | Signature, purpose, stub   |
| **10:20 - 10:30** | Examples                   |

---

# Examples

`(check-expect <function call> <expected result>)`

---


What should go in the place of `...`, to result in a PASSING test?

```
(check-expect
   (image-height (square 10 "solid" "purple"))
   ...)
```

### A. `20`
### B. `10`
### C. `true` 
### D. `number` 
### E. `image`

---

# `pizzas`
Write a function that calculates how many pizzas to order, given the number of people eating and the max number of slices one person can eat. Order only enough pizzas so that there are no leftovers after everyone has eaten. (Assume 8 slices per pizza.)

---

# Attendance!
# http://bit.ly/1370-1rollcall