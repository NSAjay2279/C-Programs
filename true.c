#include <stdio.h>

int main() {
  // Declare an array of integers
  int numbers[] = {1, 2, 3, 4, 5};

  // Get the size of the array in bytes
  size_t array_size = sizeof(numbers);

  // Get the size of one element in bytes
  size_t element_size = sizeof(numbers[0]);

  // Calculate the number of elements in the array
  int num_elements = array_size / element_size;

  // Print the size of the array in bytes and number of elements
  printf("Size of the array in bytes: %zu\n", array_size);
  printf("Number of elements in the array: %d\n", num_elements);

  return 0;
}
