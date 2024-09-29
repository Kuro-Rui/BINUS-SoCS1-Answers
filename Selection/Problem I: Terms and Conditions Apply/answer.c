#include <stdio.h>

int main() {
    unsigned short T, B;
    unsigned int A, C;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%u %hu %u", &A, &B, &C);
        printf("Case #%d: ", i);

        unsigned int cashback = A * B / 100;
        if (cashback > C) cashback = C;
        printf("%u\n", cashback);
    }
    return 0;
}