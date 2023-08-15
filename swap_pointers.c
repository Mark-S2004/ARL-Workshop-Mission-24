#include <stdio.h>

/**
  * swap_pointers - Swap the data between two pointers
  * @a: pointer to pointer to integer
  * @b: pointer to pointer to integer
  * Return: None
  */
void swap_pointers(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int data1 = 1, data2 = 2;
    int *p1 = &data1, *p2 = &data2;
    printf("Before swap: *p1 = %d, *p2 = %d\n", *p1, *p2);
    swap_pointers(&p1, &p2);
    printf("After swap: *p1 = %d, *p2 = %d\n", *p1, *p2);
    return 0;
}
