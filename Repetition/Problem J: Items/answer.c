#include <stdio.h>

int main() {
    unsigned short T, N;
    unsigned int a;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        unsigned long long total = 0;
        for (int i = 0; i < N; i++) {
            scanf("%u", &a);
            total += a;
        }
        printf("Case #%d: %llu\n", t, total);
    }
    return 0;
}