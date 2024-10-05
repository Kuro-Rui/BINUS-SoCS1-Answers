#include <stdio.h>

int main() {
    unsigned short T, N;
    unsigned int K;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu %u", &N, &K);

        char S[N + 1];
        scanf("%s", S);
        printf("Case #%d: ", t);

        K %= 26;
        for (int i = 0; i < N; i++) printf("%c", 'a' + ((S[i] - 'a' + K) % 26));
        printf("\n");
    }
    return 0;
}