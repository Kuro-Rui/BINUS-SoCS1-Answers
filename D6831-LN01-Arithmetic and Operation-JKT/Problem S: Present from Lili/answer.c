#include <stdio.h>

int main() {
    double L, B, H;
    scanf("%lf %lf %lf", &L, &B, &H);
    printf("%.3f\n", 3 * (B * L) + (B * H));
    return 0;
}