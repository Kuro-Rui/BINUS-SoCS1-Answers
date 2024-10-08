#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        unsigned short A[N];
        for (int i = 0; i < N; i++) scanf("%hu", &A[i]);

        unsigned short coolFactors = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) continue;

                unsigned short check = 0;
                for (int k = j + 1; k < N; k++) {
                    if (i != k && j != k && A[i] == A[j] + A[k]) {
                        coolFactors++;
                        check = 1;
                        break;
                    }
                }
                if (check) break;
            }
        }
        printf("Case #%d: %hu\n", t, coolFactors);
    }
    return 0;
}