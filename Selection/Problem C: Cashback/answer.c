#include <stdio.h>

int main() {
    unsigned short T, A, B;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu %hu", &A, &B);
        printf("Case #%d: %s\n", i, A > B ? "Go-Jo" : "Bi-Pay");
    }
    return 0;
}