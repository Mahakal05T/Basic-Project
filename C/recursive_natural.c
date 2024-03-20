#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    // Base case: If n is 0, return 0.
    if (n == 0) {
        return 0;
    }
    // Recursive case: Add n to the sum of the first (n-1) natural numbers.
    else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}
