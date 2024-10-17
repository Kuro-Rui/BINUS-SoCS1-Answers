#include <stdio.h>

int main() {
    unsigned short T, N, K;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu", &N, &K);

        char plots[N + 1];
        scanf("%s", plots);
        printf("Case #%d: ", t);
        if (K >= N) {
            puts("Alive");
            continue;
        }

        unsigned short stairs = 0;
        for (int i = 0; i < N; i++) if (plots[i] == '1') stairs++;
        if (stairs < 2) {
            puts("Dead");
            continue;
        }

        // If there are more than 2 stairs, Jojo will only use first and last stairs
        unsigned short breaths = 0;
        for (int i = 0; i < N; i++) {
            if (plots[i] == '1') break;
            else breaths++;
        }
        if (breaths >= K) {
            puts("Dead");
            continue;
        }

        breaths = 0;
        for (int i = N - 1; i >= 0; i--) {
            if (plots[i] == '1') break;
            else breaths++;
        }
        if (breaths >= K) {
            puts("Dead");
            continue;
        }
        puts("Alive");
    }
    return 0;
}