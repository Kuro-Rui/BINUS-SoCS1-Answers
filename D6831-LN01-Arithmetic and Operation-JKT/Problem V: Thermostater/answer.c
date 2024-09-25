#include <stdio.h>

int main() {
    unsigned short T, A;
    double R, F, K;
    scanf("%hu", &T);
    for (int i = 0; i < T; i++) {
        scanf("%hu", &A);
        R = (double)0.8 * A;
        F = (double)1.8 * A + 32;
        K = (double)A + 273.00;
        printf("%.2f %.2f %.2f\n", R, F, K);
    }
    return 0;
}