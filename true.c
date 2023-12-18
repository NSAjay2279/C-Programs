#include <stdio.h>

int main() {
    // Declare an array
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculate the length of the array
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);

    // Print the length of the array
    printf("Length of the array: %d\n", arrayLength);

    return 0;
}
