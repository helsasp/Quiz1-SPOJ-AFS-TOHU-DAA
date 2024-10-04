#include <stdio.h>

double calculateSn(int k) {
    double S = 0;
    double ak = 1.0; // Start with a1 = 1

    for (int i = 1; i <= k; i++) {
        S += i * ak; // Add k * ak to S
        ak *= (double)(k - i + 1) / (i + 1); // Update ak for the next iteration
    }

    return S;
}

int main() {
    int k;

    // Calculate S for k = 1, 2, and 5
    printf("S1 = %.11f\n", calculateSn(1));
    printf("S2 = %.11f\n", calculateSn(2));
    printf("S5 = %.11f\n", calculateSn(5));

    return 0;
}
