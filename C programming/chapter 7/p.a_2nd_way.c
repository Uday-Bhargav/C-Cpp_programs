//Access Array Using Pointer Arithmetic

#include <stdio.h>

int main() {
    int marks[5] = {10, 20, 30, 40, 50};
    int *ptr = marks; // or &marks[0]

    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}