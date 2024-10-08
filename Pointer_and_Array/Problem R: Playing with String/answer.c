#include <stdio.h>

int main() {
    unsigned short T, M;
    char original[1001], A, B;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%1000s", original);
        scanf("%hu", &M);

        for (int i = 0; i < M; i++) {
            getchar();
            scanf("%c %c", &A, &B);
            for (int j = 0; original[j] != '\0'; j++) if (original[j] == A) original[j] = B;
        }
        printf("Case #%d: %s\n", t, original);
    }
    return 0;
}