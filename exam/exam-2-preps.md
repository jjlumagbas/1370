# Exam 2 Study Guide

## What to take to the exam

- Single page (front and back) handwritten cheatsheet
- 2 blank pieces of paper (scrap paper because I won't allow erasures: write your working answers here and then transfer them to the answer sheet.)
- Don't have to take: Scantron. I'll provide the answer sheets.


## Review questions

### Design Recipe

- Can you list the Design Recipe steps in order?

### Data definitions

- Can you read a problem statement, identify which data are inputs to a function, and classify inputs as either of the following?
	- Enumeration
	- Interval
	- Atomic

### Signature, purpose, stub

- For a given problem statement, can you determine which inputs and output the function requires, and corresponding types?

### Examples (check-expects)

- Can you identify how many tests a function requires to be fully tested, based on whether the inputs to the function are enumerations, intervals, or atomic?
- Can you write a correctly formed `check-expect`?
- Can you produce the full set of `check-expect`s required to fully test a function?

### Templates

- Based on whether the data is enumeration, interval, or atomic, can you produce a template for a function that takes in a single parameter of that type?
- Can you combine templates in order to produce a template for a function that accepts multiple parameters?


### Function definitions

- Can you fill in the answer parts of a template to meet the requirements set in the problem statement?
- Can you simplify a set of `cond` expressions by eliminating `conds`, or combining question parts by using `and` or `or`?


### Structured data

- Given a struct definition, can you determine which fields make up that struct?
- Given a struct definition, can you list the constructor and selectors?
- Can you construct an instance of a struct?
- Can you select for a specific field in a struct?