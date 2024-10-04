#include <stdio.h>

int main() {
    const double pi = 3.14;
    unsigned short T, R, H;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu", &R, &H);
        double surfaceArea = 2 * pi * R * (R + H);
        printf("Case #%d: %.2f\n", t, surfaceArea);
    }
    return 0;
}