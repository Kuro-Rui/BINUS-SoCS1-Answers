#include <stdio.h>

int main() {
    unsigned short T, N;
    unsigned int M, price;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %u", &N, &M);

        unsigned int total = 0;
        for (int i = 0; i < N; i++) {
            scanf("%u", &price);
            total += price;
        }
        printf("Case #%d: %s\n", t, M >= total ? "No worries" : "Wash dishes");
    }
    return 0;
}