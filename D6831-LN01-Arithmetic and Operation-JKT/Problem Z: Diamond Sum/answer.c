#include <stdio.h>

int main() {
    unsigned short T, a, b, c, d;
    scanf("%hu", &T);
    for (int i = 0; i < T; i++) {
        scanf("%hu %hu %hu %hu", &a, &b, &c, &d);
        // 2 * a/1, 4 * b/2, 4 * c/3, 2 * d/4, now we simplify:
        printf("%.2f\n", 2 * a + 2 * b + 4 * (double)c / 3 + (double)d / 2);
    }
    return 0;
}