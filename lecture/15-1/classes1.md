# Classes Part 1

Classes are a way to represent compound data. That means data that's composed of more than one piece. Lots of things in the real world can't be represented with just one piece of data, and this is where we'll need classes:

- Time (hour, minute, second, AM/PM)
- Dates (month, day, year)
- X/Y coordinates
- Location data (longitude, latitude)

## Class definitions

Note: follow along by keeping [course1.cpp](https://github.com/jjlumagbas/1370/blob/master/lecture/15-1/course1.cpp) open in another window.

When you're defining a class, you're describing a new data type. So we can think of class definitions as being a blueprint for some data. In the next section (Creating instances), we discuss creating actual data from this blueprint.

Here's a basic class definition for a college course:

```c++
class Course {
  public:
    string code;
    string number;
    string title;
    int hours;
};
```

Notice a few things:

1. The **class name** is `Course`. Class names don't have to begin with a capital letter, but that's the convention we're going to follow, so it's easier to distinguish between built-in types (`int`, `bool`, `string`) and our own user-defined types.
2. The keyword `public:` at the top of our definition. We won't go into this very deeply for now, but suffice to say this allows members of the class to be accessed outside of the class itself (this will make more sense later). Which brings us to:
3. **Class members**: members are what we'll call the different pieces that make up our class. Concretely, `Course` has 4 **member variables**: `code`, `number`, `title`, and `hours`. Members are referred to sometimes as **attributes**, but we're going to try to stick with "members" to stay consistent.
4. Notice that semicolon at the end of the definition. Unlike function definitions, that's required.
5. Finally, we usually place class definitions at the top of our file, beneath the includes, and above function definitions. This is so that functions can use the type as parameters or return values.


## Creating instances and accessing members

Remember that class definitions are like a blueprint for a *thing*, and not the actual *thing* yet. The *thing* itself (or **object**) is what we'll call an **instance** of a class.

So say the class is `Student`, then an instance of `Student` might be you, the actual student. `Student` is the abstract concept, while the concrete thing is you, the instance of `Student`.

Here's how we create and initialize an instance of `Course` (this code might go in our function definitions, or in `main`):

```c++
Course c1;
c1.code = "CSCI";
c1.number = "1370";
c1.title = "Engineering Computer Science I";
c1.hours = 3;
```

1. The variable declaration for `c1` is the same as any of the previous declarations we've done: `<type>` followed by `<variable name>`.
2. To intialize each of the member variables, we use the dot `.` operator. The syntax is `<instance name>.<member name>`.
3. The dot operator can also be used to retrieve the value of the member variable. For instance, we can first initialize `c1` and then say:

```c++
cout << c1.code;  // Output: "CSCI"
```


## Passing to functions

Just as any other type, we can specify our class as the type of an input to our functions, or as the return type from our function. Here's an example:

```c++
string course_to_string(Course c) {
  return c.code + " " + c.number + " - " + c.title;
}
```

This function simply concatenates member variables so we can use that string to print out the course like this:

```c++
cout << course_to_string(c1); // Output: "CSCI 1370 - Engineering Computer Science I"
```

Notice again the use of the dot operator to access the member variables of that instance.

## Arrays of instances

We can also have arrays of instances. Say we've defined another course `c2`. We can then create an array of Courses like this, same as we do for arrays of built-in types:

```c++
Course courses[2] = {c1, c2};
```

Functions can then accept Course arrays and operate on them:

```c++
int total_hours(Course courses[], int length) {
  int total = 0;
  for (int i = 0; i < length; i++) {
    total += courses[i].hours;
  }
  return total;
}
```

Can you spot the dot operator? Each element of the array is a Course, which means that `courses[i]` refers to an instance of Course, and so we can use the dot operator and expect to access a member variable of that instance.