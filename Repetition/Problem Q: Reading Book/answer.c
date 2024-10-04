#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        unsigned int N, X;
        scanf("%u %u", &N, &X);

        unsigned int frontFlips = X / 2;
        unsigned int backFlips = (N - X + X % 2) / 2;
        printf("Case #%d: %u\n", i, frontFlips <= backFlips ? frontFlips : backFlips);
    }
    return 0;
}