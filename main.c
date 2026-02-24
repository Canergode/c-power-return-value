#include <stdio.h>
#include <stdlib.h>

/**
 * Calculates the power of a base to an exponent using return-by-value.
 * @param base The base number.
 * @param exponent The exponent.
 * @return The calculated result (base^exponent).
 */
int calculate_power(int base, int exponent) {
    int i, result = 1;

    for (i = 0; i < exponent; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    int x = 4, y = 5, result;

    result = calculate_power(x, y);
    printf("Calculated Result: %d\n", result);

    return 0;
}
