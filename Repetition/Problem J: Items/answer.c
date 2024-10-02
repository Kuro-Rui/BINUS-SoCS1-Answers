#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        unsigned int N;
        scanf("%u", &N);

        unsigned long long total = 0;
        for (int j = 0; j < N; j++) {
            unsigned int a;
            scanf("%u", &a);
            total += a;
        }
        printf("Case #%d: %llu\n", i, total);
    }
    return 0;
}