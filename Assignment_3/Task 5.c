#include <stdio.h>
#include <stdlib.h>

/* Function to swap two numbers using pointers */
void swapNumbers(int *x, int *y) {
    int temp;

    temp = *x;  // store value at x
    *x = * y;   // assign value at y to x
    *y = temp;  // assign temp to y
    }
int main()
{   int a = 5;
    int b = 10;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call function by passing addresses
    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
