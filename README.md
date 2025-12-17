# Marvin-Omondi-StructuredProgramming
ENE211-0147/2023
## Difference between a normal variable and a pointer
A normal variable stores an actual value in memory, while a pointer stores the memory address of another variable.

A normal variable stores data (e.g. an integer value).

A pointer stores the address where data is stored.

Accessing memory:

Normal variables access memory directly by their name.

Pointers access memory indirectly using the address they hold.

Reading and modifying values:

Normal variable: value is read or modified directly.

Pointer: value is read or modified using dereferencing (*).

Example:
int x = 10;      // normal variable
int *p = &x;    // pointer

x = 20;         // direct modification
*p = 30;        // modification through pointer

```c
int x = 10;
int *p = &x;
printf("%d", *p);
