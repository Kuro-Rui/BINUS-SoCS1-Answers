#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%u", &N);
        
        int V, max1 = -1000001, max2 = -1000001;
        for (int i = 0; i < N; i++) {
            scanf("%d", &V);
            if (V > max1) {
                max2 = max1;
                max1 = V;
            } else if (V > max2) max2 = V;
        }
        printf("Case #%d: %d\n", t, max1 + max2);
    }
    return 0;
}