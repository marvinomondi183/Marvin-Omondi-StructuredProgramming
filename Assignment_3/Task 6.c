#include <stdio.h>
#include <stdlib.h>

/* Pass by VALUE */
void incrementByValue(int x) {
x = x + 1;
}

/* Pass by REFERENCE */
void incrementByReference(int *x) {
    *x = *x + 1;
    }

int main()
{   int number = 10;
    printf("Initial value: %d\n", number);

    incrementByValue(number);
    printf("After pass by value: %d\n", number);

    incrementByReference(&number);
    printf("After pass by reference: %d\n", number);

    return 0;
}
