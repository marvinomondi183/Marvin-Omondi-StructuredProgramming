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

* → declares a pointer OR accesses the value stored at the pointer
