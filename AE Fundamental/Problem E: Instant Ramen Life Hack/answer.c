#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int K, N, M;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%u %u %u", &K, &N, &M);
        printf("Case #%d: %s\n", t, N + M >= K ? "yes" : "no");
    }
    return 0;
}