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

# Design recipe

0. Read problem statement, write wishlist
1. Data definitions
2. Signature, purpose, stub
3. Examples
4. Template
5. Function body
6. Test and debug

---

# Today

| Time              | Topic                |
|:------------------|:---------------------|
| **9:30 - 9:45**   | Project review       |
| **9:45 - 10:15** 	| Composing templates  |
| **10:15 - 10:30** | Simplifying conds    |

---

# Composing functions

problem involves multiple subtasks

---

# Composing functions

problem involves multiple subtasks


# Composing templates

function accepts multiple parameters

---

# Composing templates

- Check if available for office hours based on day of the week and hour of the day
- Mixing primary colors
- Determine whether an attempted charge on a debit card is successful based on whether the account is suspended or not, and account balance is sufficient for purchase price
- Calculate insurance premium from gender, age, and number of tickets on record
- Diagnose a patient based on temperature, and whether or not he has either (or more) of: a stuffy nose, rashes, pain in the ear


---

# Composing templates

function accepts multiple parameters

- Data definitions + single-parameter templates
- Combine templates
- Simplify cond expression

---

## Do

- Check if available for office hours based on day of the week and hour of the day
- Final grade

## Show

- Determine whether an attempted charge on a debit card is successful based on whether the account is suspended or not, and account balance is sufficient for purchase price

## You

- Mixing primary colors
- Calculate insurance premium from gender, age, and number of tickets on record

---

# Composing templates

function accepts multiple parameters

- Data definitions + single-parameter templates
- Combine templates
- Simplify cond expression

---

# Today

| Time              | Topic                |
|:------------------|:---------------------|
| **9:30 - 9:45**   | Project review       |
| **9:45 - 10:15** 	| Composing templates  |
| **10:15 - 10:30** | Simplifying conds    |

---

# Simplifying cond expressions

- cond where all answers are the same: eliminate the cond
- multiple conditions need to be true to produce an answer: `and`
- multiple clauses have the same answer: `or`

---

# Compound boolean expressions

- `and`
- `or`
- `not`


---

### Boolean operators 

|    a   |    b   | (and a b) | (or a b) | (not a) |
|:------:|:------:|:---------:|:--------:|:-------:|
| T      | T      |           |          |         |
| T      | F      |           |          |         |
| F      | T      |           |          |         |
| F      | F      |           |          |         |


---

```
(and (> 7 4) (or (not (> 7 8)) (= 7 5)))
```

## A. `true`
## B. `false`
## C. Error
## D. It depends
## E. I don't know

---

# `diagnose`

---

# Attendance!
# http://bit.ly/1370-1rollcall