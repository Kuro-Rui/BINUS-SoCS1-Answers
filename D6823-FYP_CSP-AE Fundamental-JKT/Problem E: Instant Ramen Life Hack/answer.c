#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int K[T], N[T], M[T];
    for (int i = 0; i < T; i++) scanf("%d %d %d", &K[i], &N[i], &M[i]);
    for (int i = 0; i < T; i++) {
        printf("Case #%d: ", i + 1);
        if (N[i] + M[i] >= K[i]) puts("yes");
        else puts("no");
    }
}