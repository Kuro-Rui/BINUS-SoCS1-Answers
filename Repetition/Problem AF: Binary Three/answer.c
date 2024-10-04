#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T ; t++) {
        scanf("%hu", &N);
        unsigned int A[N];
        for (int i = 0; i < N; i++) scanf("%u", &A[i]);

        unsigned short on = 0, off = 0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                unsigned int xorResult = A[i] ^ A[j];
                unsigned short onBits = 0;
                while (xorResult > 0) {
                    onBits += xorResult & 1;
                    xorResult >>= 1;
                }
                if (onBits >= 3) on++;
                else off++;
            }
        }
        printf("Case #%d: %hu %hu\n", t, on, off);
    }
    return 0;
}