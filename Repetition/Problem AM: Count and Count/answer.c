#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        printf("Case #%d:\n", t);
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
            if ((i % 3 == 0 || i % 5 == 0) && i % 15 != 0) puts("Jojo");
            else puts("Lili");
        }
    }
    return 0;
}