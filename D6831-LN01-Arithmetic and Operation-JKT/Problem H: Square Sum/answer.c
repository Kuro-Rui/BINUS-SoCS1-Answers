#include <stdio.h>

int main() {
    unsigned short a, b, c, d;
    for (int i = 0; i < 3; i++) {
        scanf("%hu %hu %hu %hu", &a, &b, &c, &d);
        // 2 * a/1, 4 * b/2, 6 * c/3, 4 * d/4, now we simplify:
        printf("%.2f\n", (double)2 * a + 2 * b + 2 * c + d);
    }
    return 0;
}