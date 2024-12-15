#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%hu", &N);

        unsigned int X[N];
        for (int j = 0; j < N; j++) scanf("%u", &X[j]);

        unsigned int min = X[1] - X[0];
        for (int j = 2; j < N; j++) {
            unsigned int diff = X[j] - X[j - 1];
            if (diff < min) min = diff;
        }
        printf("Case #%d: %u\n", i, min);
    }
    return 0;
}