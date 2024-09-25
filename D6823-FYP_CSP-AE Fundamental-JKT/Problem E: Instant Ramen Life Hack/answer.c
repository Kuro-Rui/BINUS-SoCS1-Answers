#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int K, N, M;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%u %u %u", &K, &N, &M);
        printf("Case #%d: ", i);
        if (N + M >= K) puts("yes");
        else puts("no");
    }
}