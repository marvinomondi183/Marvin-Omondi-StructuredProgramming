# Marvin-Omondi-StructuredProgramming
ENE211-0147/2023
## Assignment 3
### Difference between a normal variable and a pointer
 A normal variable stores an actual value, while a pointer stores the memory address of another variable.

Normal variable: stores data directly

Pointer: stores address of data

Normal variable: accessed directly by name

Pointer: accessed indirectly using dereferencing (*)

Example:

```c
int x = 10;       // Normal variable stores value
int *p = &x;      // Pointer stores address of x

x = 20;           // Direct modification
*p = 30;          // Modification through pointer

printf("x = %d\n", x);     // Output: 30
printf("*p = %d\n", *p);   // Output: 30
```
### 2. Variable vs Pointer Declaration
#### Variable declaration and definition;

```c
int a; // Declaration
a = 5; // Definition
```
#### Pointer declaration and definition

```c
int *ptr // Pointer declaration
ptr = &a; // Pointer definition
```
Key operators:

& → gets the address of a variable

while *  declares a pointer OR accesses the value stored at the pointer

### 3. Dereferencing a Pointer

Dereferencing a pointer means accessing or modifying the value stored at the memory address held by the pointer.

Reading a value:
```c
int x = 15;
int *p = &x;

printf("Value of x through pointer: %d\n", *p);
```
Modifying a value:
```c
int x = 15;
int *p = &x;

*p = 40;     // Changes x to 40
printf("New value of x: %d\n", x);
```

### Memory Access Example
```c
int a = 7;
int *ptr = &a;

printf("Address of a: %p\n", ptr);
printf("Value of a via pointer: %d\n", *ptr);
```
### Conclusion
Pointers allow indirect access to memory, enabling:

Efficient data manipulation

Dynamic memory use

Passing values by reference to functions

### 4.Scenarios Where Pointers Are Preferred

Pointers are preferred over normal variables when you need:

Efficient memory use – Pass large data structures to functions without copying.

Dynamic memory allocation – Create variables or arrays at runtime.

Modifying variables in other functions – Pass by reference.

Example 1: Modify value in a function (no return needed)
```c
#include <stdio.h>

void increment(int *p) {
    *p = *p + 1;
}

int main() {
    int x = 5;
    increment(&x);
    printf("x = %d\n", x);  // Output: 6
    return 0;
}
```
Example 2: Dynamic memory allocation
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 ints
    for(int i = 0; i < 5; i++) arr[i] = i+1;
    printf("%d\n", arr[2]); // Output: 3
    free(arr);               // free memory
    return 0;
}
```
### 5.Limitations and Risks of Pointers

Dangling pointers – Pointing to memory that has been freed.

Memory leaks – Forgetting to free dynamically allocated memory.

Pointer arithmetic errors – Can lead to undefined behavior.

Harder to debug – Mistakes in addresses may crash the program.

### 6.Call by Value vs Call by Reference
Call by Value

Function receives a copy of the variable.

Changes inside function do not affect the original variable.
```c
#include <stdio.h>

void addTen(int n) {
    n = n + 10;
}

int main() {
    int x = 5;
    addTen(x);
    printf("x = %d\n", x); // Output: 5
    return 0;
}
```
Call by Reference

Function receives address of the variable (pointer).

Changes inside function affect the original variable.
```c
#include <stdio.h>

void addTen(int *n) {
    *n = *n + 10;
}

int main() {
    int x = 5;
    addTen(&x);
    printf("x = %d\n", x); // Output: 15
    return 0;
}
```
### 7.Practical Scenarios for Call Methods

a. Call by Value is preferred when:

You don’t want the function to modify the original variable

Passing small data types (int, float, char) for efficiency

b. Call by Reference is preferred when:

You want the function to modify the original variable

Passing large data structures (arrays, structs) to avoid copying

Example Scenario:

Call by value: Calculate sum of two numbers (original numbers remain unchanged)

Call by reference: Swap two numbers or modify array elements inside a function


