#include <math.h>
#include <stdio.h>

int main() {
    unsigned int X;
    double Y;
    scanf("%u %lf", &X, &Y);

    // Compound Interest (Bunga Majemuk) -> Mn = M0 * (1 + i)^n
    printf("%.2f\n", X * pow(1 + Y / 100, 3));
    return 0;
}