#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short correct = 0;
        scanf("%hu", &N);

        char S[N + 1], K[N + 1];
        scanf("%s", S);
        getchar();
        scanf("%s", K);
        getchar();

        for (int i = 0; i < N; i++) if (S[i] == K[i]) correct++;
        printf("Case #%d: %hu\n", t, correct * 100 / N);
    }
    return 0;
}