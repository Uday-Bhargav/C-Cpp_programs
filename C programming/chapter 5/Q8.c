//program for reversing a number (recursion).

#include <stdio.h>

// Recursive function to reverse a number
int reverse(int n) {
    static int rev = 0;
    if (n == 0) {
        return rev;
    } else {
        rev = rev * 10 + n % 10;
        return reverse(n / 10);  // Recursive call
    }
}

int main() {
    int n = 12345;

    // Output the reversed number
    printf("Reversed number is: %d\n", reverse(n));

    return 0;
}