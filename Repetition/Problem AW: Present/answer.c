#include <stdio.h>

int main() {
    unsigned short T, N, score;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short max = 0, A[101] = {0};
        scanf("%hu", &N);
        for (int i = 0; i < N; i++) {
            scanf("%hu", &score);
            A[score]++;
            if (score > max) max = score;
        }
        printf("Case #%d: %hu\n", t, A[max]);
    }
    return 0;
}