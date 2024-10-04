#include <stdio.h>

int main() {
    unsigned short T, A, B;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu", &A, &B);

        unsigned short total = A, empty = A;
        while (empty >= B) {
            total += empty / B;
            empty = empty % B + empty / B;
        }
        printf("Case #%d: %hu\n", t, total);
    }
    return 0;
}