#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        unsigned short N;
        unsigned int M;
        scanf("%hu %u", &N, &M);

        unsigned int total = 0;
        for (int j = 0; j < N; j++) {
            unsigned int price;
            scanf("%u", &price);
            total += price;
        }
        if (M >= total) printf("Case #%d: No worries\n", i);
        else printf("Case #%d: Wash dishes\n", i);
    }
    return 0;
}