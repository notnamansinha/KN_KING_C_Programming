### **Problem 1: The ASCII Antenna (Concepts: `printf` formatting)**

Write a program that uses `printf` statements to draw a simple radio telescope or antenna shape using asterisks (`*`) and spaces.

* **Requirements:** You must use formatting spaces carefully to align the stars, similar to your `star.c` file.
* **Challenge:** Try to complete the drawing using the fewest number of `printf` statements possible (perhaps exploring newline characters `\n` within a single string).

### **Problem 2: Counterweight Fabrication (Concepts: `#define`, `scanf`, floats, arithmetic)**

You are calculating the material required for a spherical steel counterweight on a mechanical mount.

* **Requirements:** 1. Prompt the user to enter the **radius** of the sphere (in meters).
2. Calculate the volume of the sphere using a `#define` macro for `PI` (3.14159...).
3. Assume the steel costs 450.00 per cubic meter. Calculate the base cost.
4. Apply a 5% fabrication tax to the base cost.
5. Output the total volume, the base cost, and the final taxed cost, all formatted to exactly two decimal places.

### **Problem 3: Transformer Core Loss Polynomial (Concepts: evaluating polynomials, Horner's Rule)**

You need to calculate a baseline metric representing the iron and copper losses (no-load current effects) in a transformer based on an input voltage variable, $v$.

* **Requirements:**
1. Prompt the user to enter an integer value for $v$.
2. Evaluate the following polynomial: $Loss = 2v^4 + 3v^3 - v^2 + 5v - 8$
3. Output the final calculated integer.


* **Challenge:** Write two separate C files for this. In the first, calculate it the standard way (using multiple multiplications like `v*v*v*v`). In the second, optimize the calculation using **Horner's Rule** (factoring out $v$ to minimize the total number of multiplications), exactly as demonstrated in your `sum2.c` project.

### **Problem 4: BRTS Fare Machine (Concepts: Integer division `/`, Modulo `%`)**

A serverless transit ticketing system needs a module to dispense exact change. A commuter buys a ticket using a large bill, and the machine must return the change using the smallest possible number of bills.

* **Requirements:**
1. Prompt the user for the **Total Fare** and the **Amount Paid** (both as integers).
2. Calculate the **Change Due**.
3. Break the change down into the exact number of 50, 20, 10, 5, and 1 denominations required.
4. Print the breakdown clearly.
*Example:* If the change is 87, the output should be: one 50, one 20, one 10, one 5, two 1s.



### **Problem 5: IoT Power Drain (Concepts: Sequential updates, float reassignment)**

An ESP32 module with a 4G GPS module starts with a specific battery capacity. Every hour, two things happen: it loses a percentage of its *current* remaining capacity due to baseline standby drain, and then it loses a fixed amount of capacity to transmit coordinates.

* **Requirements:**
1. Prompt the user for the **starting battery capacity** (in mAh).
2. Prompt the user for the **standby drain rate** (as a percentage, e.g., enter 2 for 2%). *Note: You will need to convert this to a decimal in your code.*
3. Prompt the user for the **transmission cost** (a fixed mAh value, e.g., 15.5).
4. Calculate and print the remaining battery capacity after the **first hour**, **second hour**, and **third hour**.
5. You must overwrite the same capacity variable sequentially, without using loops (since Chapter 2 does not cover loops yet). Format the outputs to one decimal place.