#include <stdio.h>

int main() {
    unsigned short T, N, M;
    unsigned int A;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu", &N, &M);
        
        unsigned long long totalWeight = 0;
        for (int i = 0; i < N; i++) {
            unsigned int maxWeight = 0;
            for (int j = 0; j < M; j++) {
                scanf("%u", &A); 
                if (A > maxWeight) maxWeight = A;
            }
            totalWeight += maxWeight;
        }
        printf("Case #%d: %llu\n", t, totalWeight);
    }
    return 0;
}