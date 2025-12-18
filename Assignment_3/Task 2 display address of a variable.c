#include <stdio.h>
#include <stdlib.h>

int main()
{   int num = 10;   // Declare integer variable
    int *ptr;       // Declare pointer

    ptr = &num;     // Store address of num in pointer

    // Display results
    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Address of num: %p\n", &num);

    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}
