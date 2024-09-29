#include <stdio.h>

int main() {
    unsigned short T, A, B;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu %hu", &A, &B);
        printf("Case #%d: ", i);
        if (A > B) puts("Go-Jo");
        else puts("Bi-Pay");
    }
    return 0;
}