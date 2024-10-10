#include <stdio.h>

int main() {
    unsigned short T, Q, L, R;
    char S[1001];
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %1000s", &Q, S);
        for (int i = 0; i < Q; i++) {
            scanf("%hu %hu", &L, &R);
            while (L < R) {
                char temp = S[L - 1];
                S[L - 1] = S[R - 1];
                S[R - 1] = temp;
                L++;
                R--;
            }
        }
        printf("Case #%d: %s\n", t, S);
    }
    return 0;
}