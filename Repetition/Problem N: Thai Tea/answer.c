#include <stdio.h>

int main() {
    unsigned short T, A, B;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%hu %hu", &A, &B);

        unsigned short total = A;
        unsigned short empty = A;
        while (empty >= B) {
            total += empty / B;
            empty = empty % B + empty / B;
        }
        printf("Case #%d: %hu\n", i, total);
    }
    return 0;
}