# Classes (Part 2)

So far we've learned about [class definitions, creating instances of classes, and using class types as parameters to functions and as a type for arrays](https://github.com/jjlumagbas/1370/blob/master/lecture/15-1/classes1.md). In this part, we'll go over how classes are different from structs, in that they don't just carry data, they can also hold *operations* on that data.

Note: follow along by keeping [course2.cpp](https://github.com/jjlumagbas/1370/blob/master/lecture/15-2/course2.cpp) open in another window.

## Constructors

We've discussed initializing a class using the dot operator:

```c++
Course c1;
c1.code = "CSCI";
c1.number = "1370";
c1.title = "Engineering Computer Science I";
c1.hours = 3;
```

This approach, however, is error prone in a number of ways:

You might initialize some of the instance variables, but miss the others:

```c++
Course c1;
c1.code = "CSCI";
c1.number = "1370";
c1.hours = 3;
// Forgot to initialize title!
```

You might supply invalid values for a member:

```c++
Course c1;
c1.hours = -3;  // Invalid value for hours!
```

To prevent these mistakes, we can declare a function called a **constructor** that's responsible for:

1. Creating the instance of the class, and
2. Ensuring the the members are initialized correctly.

We're going to define a **constructor** for `Course` next, but if we did, then we could then create and initialize instances this way:

```c++
Course c1 = Course("CSCI", "1370", "Engineering Computer Science I", 3);
```

And then the constructor is defined this way:

```c++
class Course {
  public:
    string code;
    string number;
    string title;
    int hours;

	Course(string a_code, string a_number, string a_title, int a_hours) {
	  code = a_code;
	  number = a_number;
	  title = a_title;
	
	  if (a_hours > 0) {
	    hours = a_hours;
	  } else {
	    hours = 0;
	  }
	}
}
```

Do you notice how defining a constructor solves the problems we described above?

Otherwise, here are some aspects of constructor definition to point out:

1. The constructor is defined *inside* the class definition.
2. No return type: this function doesn't return a value, instead it creates a new instance. So we don't specify a return type at the function header, and we don't use the `return` keyword to produce a result.
3. Inside of the constructor body, we have direct access to the member variables `code`, `number`, `title`, and `hours`, even if we hadn't listed them in the parameter list for the constructor. 
4. Remember, each instance of the class gets its own set of member variables. So when a constructor is called, the variables will refer to those of "this" instance. Again, instance variables are not shared across instances of the class.

Let's look again at invoking the constructor:

```c++
Course c1 = Course("CSCI", "1370", "Engineering Computer Science I", 3);
```

This actually isn't the idiomatic way to construct an instance of a class. It's more common to see a constructor invoked this way:

```c++
Course c1("CSCI", "1370", "Engineering Computer Science I", 3);
```

I'll talk about the differences in lecture. I just used the first form because it seems more natural syntax-wise based on what we know already. But moving forward, we're going to use the second form.


## Member functions

Constructors show us that class definitions can not only: 

1. specify a set of data that composes the type, but in addition also
2. specify operations on that data.

In other words we can have functions that have access to the data, and can operate on them safely.

Can we define other functions that operate on the data? Yes:

```c++
class Course {
  public:
    string code;
    string number;
    string title;
    int hours;

	Course(string a_code, string a_number, string a_title, int a_hours) {
	  ...
	}
		    
    string to_string() {
      return code + " " + number + " - " + title;
    }
}
```

Recall our original definition for `to_string` (as an external function):

```c++
string course_to_string(Course c) {
  return c.code + " " + c.number + " - " + c.title;
}
```

And note the before and after of our function calls:

```
// course_to_string as external function
cout << course_to_string(c1); 

// to_string as member function
cout << c1.to_string();
```

What are the differences?

- In the definition of the member function `to_string`, we don't need to specify a `Course` as an input parameter. 

This is because (you'll observe) that in the function call `c1.to_string()`, the function is called using the dot `.` operator, the operator that gives access to the member of the instance. 

Which means that the function call invokes `c1`'s copy of `to_string`, which can then access the member variables specific to `c1`. Compare it with this function call:

```
cout << c2.to_string();
```

Which version of to_string is called in this case? `c2`'s version, which operates on `c2`'s instance variables.

- In the body of `to_string`, we don't need to use the dot operator to access the variables.

Why is that unecessary? Because `to_string`, just like the constructor, has direct access to the member variables of that instance. (Or, more properly, "this" instance.)