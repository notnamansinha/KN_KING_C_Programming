# C Programming Challenges

## Challenge 1: The Transit Platform Data Parser

### Concepts Covered

-   Advanced `scanf` pattern matching
-   Avoiding variable cross-contamination
-   Strict formatting

### Problem Statement

Imagine you are developing a serverless transit platform for real-time
bus tracking and need to parse incoming route strings from the backend.

The data arrives in this exact format:

    [Route]-<BusNumber>-(HH:MM)

### Task

Write a C program that: - Prompts the user to enter a transit string in
the exact format. - Uses `scanf` to extract all four integers. - Prints
the parsed data cleanly.

### Example I/O

    Enter transit data: [15]-<402>-(14:30)

    Route ID: 15
    Bus Number: 402
    Arrival Time: 14:30

------------------------------------------------------------------------

# Challenge 2: The Radio Telescope Calibration Grid

### Concepts Covered

-   Bulk inputs
-   Multiple variable assignments
-   Arithmetic operations
-   Formatting matrices

### Problem Statement

You are working on a support system for a radio telescope mount and need
to process a 3 × 3 grid of load-bearing calibration numbers.

### Task

Write a program that: - Prompts the user to enter 9 integers in any
order. - Stores these in 9 separate variables. - Prints the numbers as a
neat 3 × 3 grid. - Calculates and prints: - Three row sums - Three
column sums - Two main diagonal sums

### Example I/O

    Enter 9 calibration numbers: 1 2 3 4 5 6 7 8 9

    Calibration Grid:

    1  2  3
    4  5  6
    7  8  9

    Row sums: 6 15 24
    Column sums: 12 15 18
    Diagonal sums: 15 15

------------------------------------------------------------------------

# Challenge 3: Hardware Inventory Invoice

### Concepts Covered

-   Complex `printf` table alignment
-   Escape sequences (`\t`, `\n`)
-   Printing literal symbols (`%`, `$`)
-   Cross-multiplication arithmetic

### Problem Statement

Managing hardware inventory such as ESP32 boards or 4G GPS modules
requires clean tabular reporting.

### Task

Write a program that: - Takes two separate component orders. - Accepts
input in this format:

    ComponentID / Quantity @ $Price

-   Calculates:
    -   Total cost for each component
    -   Grand total
-   Outputs a properly aligned receipt using:
    -   Tab (`\t`)
    -   Newline (`\n`)
-   Successfully prints the `$` symbol.

### Example I/O

    Enter first order (ID / Qty @ $Price): 101 / 5 @ $12
    Enter second order (ID / Qty @ $Price): 204 / 3 @ $40

    ID      Qty     Price   Total
    101     5       $12     $60
    204     3       $40     $120

    Grand Total: $180
