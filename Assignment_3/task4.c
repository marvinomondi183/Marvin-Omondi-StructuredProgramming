#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1 = 15;  // Declare and initialize first number
    int num2 = 25;  // Declare and initialize second number

    int *ptr1 = &num1;  // Pointer to num1
    int *ptr2 = &num2;  // pointer to num2

    int sum;    // Variable to store sum

    sum = *ptr1 + *ptr2; // Add values using pointer dereferencing

    printf("Sum = %d\n", sum);

    return 0;
}
