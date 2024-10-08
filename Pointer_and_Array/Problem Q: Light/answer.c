#include <stdio.h>

int main() {
    unsigned short T, N, M, Q;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu %hu", &N, &M, &Q);
        
        unsigned short patterns[N][M], lights[M], friendIndex;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) scanf("%hu", &patterns[i][j]);
        }
        for (int i = 0; i < M; i++) lights[i] = 0;
        for (int i = 0; i < Q; i++) {
            scanf("%hu", &friendIndex);
            friendIndex--;
            for (int j = 0; j < M; j++) if (patterns[friendIndex][j] == 1) lights[j] = !lights[j];
        }
        
        printf("Case #%d:\n", t);
        for (int i = 0; i < M; i++) puts(lights[i] == 1 ? "YES" : "NO");
    }
    return 0;
}