# C Programming Practice Questions

## Question 1: The Digit Combiner

**Concepts Tested:** Basic modulo and integer division logic.

Write a program that asks the user for a two-digit integer.

Instead of reversing it, calculate and print:

-   The sum of its digits
-   The product of its digits

Use arithmetic operators.

**Constraint:**

Read the input as a single integer.

Example:

``` c
scanf("%d", &num);
```

------------------------------------------------------------------------

## Question 2: The Three-Digit Reverser (Two Ways)

**Concepts Tested:** Difference between mathematical extraction and I/O
manipulation.

Write a program that asks the user to enter a three-digit number and
prints it in reverse.

Solve this using two completely separate C files.

### Method A: The Math Route

Requirements:

-   Read the number as a single integer.
-   Use:
    -   Integer division (`/`)
    -   Remainder operator (`%`)
-   Extract:
    -   Hundreds digit
    -   Tens digit
    -   Units digit
-   Print the digits in reverse order.

### Method B: The I/O Route

Requirements:

-   Do not use arithmetic operators to split the digits.
-   Use `scanf` formatting to read the three consecutive digits directly
    into three separate variables.

------------------------------------------------------------------------

## Question 3: Sensor Data Base-6 Conversion

**Concepts Tested:** Successive division, modulo chains, and variable
assignment.

A microcontroller module provides raw data as a base-10 integer, but the
downstream system requires the value in base-6.

Write a program that:

1.  Prompts the user to enter a base-10 integer between `0` and `7775`.
2.  Converts it into its base-6 equivalent.
3.  Displays the result using continuous division and remainder
    operations.

**Constraint:**

The final output must display exactly five digits.

------------------------------------------------------------------------

## Question 4: Transit Smart Card Check Digit

**Concepts Tested:**

-   Complex algorithmic expressions
-   Operator precedence
-   Grouped input handling

A BRTS transit smart card contains 9 digits. A 10th check digit is
generated to validate the card number.

Write a program that:

1.  Prompts the user to enter the first 9 digits continuously (without
    spaces).
2.  Calculates the check digit using the following steps.

### Algorithm

#### Step 1

Add the:

-   1st digit
-   3rd digit
-   5th digit
-   7th digit
-   9th digit

Store this as the first sum.

#### Step 2

Add the:

-   2nd digit
-   4th digit
-   6th digit
-   8th digit

Store this as the second sum.

#### Step 3

Calculate:

    total = (first_sum * 4) + second_sum

#### Step 4

Subtract 1:

    total = total - 1

#### Step 5

Find the remainder when divided by 10:

    remainder = total % 10

#### Step 6

Calculate the final check digit:

    Check Digit = 9 - ((total - 1) % 10)

------------------------------------------------------------------------

## Expected Console Flow

``` text
Enter the 9-digit smart card number: 135792468
Check digit: 5
```
