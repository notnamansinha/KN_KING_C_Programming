# C Programming Practice Problems

## 1. The Beaufort Scale

**Concepts Tested:** Cascading `if-else` statements and relational
operators

Write a program that asks the user to enter a wind speed (in knots),
then displays the corresponding description based on the Beaufort scale.

### Scale:

  Wind Speed (knots)   Description
  -------------------- -------------
  Less than 1          Calm
  1 to 3               Light air
  4 to 27              Breeze
  28 to 47             Gale
  48 to 63             Storm
  Above 63             Hurricane

------------------------------------------------------------------------

## 2. The Number-to-Word Translator

**Concepts Tested:** `switch` statements and number splitting

Write a program that asks the user for a two-digit integer, then prints
the English word for the number.

### Hint:

-   Break the number into two digits:
    -   Tens digit
    -   Ones digit
-   Use one `switch` statement for the tens digit:
    -   twenty, thirty, forty, etc.
-   Use another `switch` statement for the ones digit:
    -   one, two, three, etc.

### Special Case:

Numbers between **11 and 19** require their own separate logic block.

### Example:

**Input:**

    45

**Output:**

    You entered the number forty-five.

------------------------------------------------------------------------

## 3. The Flight Matcher

**Concepts Tested:** Complex `if` logic and time calculations

A standalone terminal at an airport has the following daily departure
times:

-   8:00 AM
-   9:43 AM
-   11:19 AM
-   12:47 PM
-   2:00 PM
-   3:45 PM
-   7:00 PM
-   9:45 PM

Write a program that asks the user to enter a time in **24-hour format**
(example: `13:15`).

The program should display the departure time for the flight whose
departure time is closest to the entered time.

### Hint:

1.  Convert the user's input into total minutes since midnight.
2.  Convert all preset flight times into minutes since midnight.
3.  Use `if-else` statements to find the smallest time difference.

------------------------------------------------------------------------

## 4. The Letter Grade Calculator

**Concepts Tested:** `switch` fall-through and integer division

Write a program that converts a numerical grade into a letter grade
using a `switch` statement.

### Grading Scale:

  Grade Range   Letter Grade
  ------------- --------------
  90-100        A
  80-89         B
  70-79         C
  60-69         D
  0-59          F

### Hint:

-   A `switch` statement cannot directly handle ranges.
-   Divide the numerical grade by 10 to get a single digit.
-   Pass that digit into the `switch` statement.
-   Add error handling for:
    -   Grades less than 0
    -   Grades greater than 100

------------------------------------------------------------------------

## 5. Min/Max Finder

**Concepts Tested:** Logical operators

Write a program that prompts the user to enter four integers.

The program should display:

-   The largest number
-   The smallest number

### Constraint:

Try to accomplish this using as few `if` statements as possible to
optimize your code.

------------------------------------------------------------------------

## Compiler Challenge

Solve each problem one by one.

Use compiler errors as feedback, debug your logic carefully, and improve
your understanding of C programming fundamentals.
