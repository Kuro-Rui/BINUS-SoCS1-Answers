#include <stdio.h>

int main() {
    unsigned short T, N, P, Q;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        short A[N];
        for (int i = 0; i < N; i++) scanf("%hd", &A[i]);
        scanf("%hu %hu", &P, &Q);
        
        printf("Case #%d : ", t);
        if (A[P - 1] > A[Q - 1]) puts("Bibi");
        else if (A[Q - 1] > A[P - 1]) puts("Lili");
        else puts("Draw");
    }
    return 0;
}