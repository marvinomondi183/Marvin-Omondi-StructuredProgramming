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


