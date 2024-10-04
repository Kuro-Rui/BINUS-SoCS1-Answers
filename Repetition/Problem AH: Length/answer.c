#include <stdio.h>

int main() {
    unsigned short T;
    unsigned long long N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short length = 1;
        scanf("%llu", &N);
        while (N >= 10) {
            N /= 10;
            length++;
        }
        printf("Case #%d: %hu\n", t, length);
    }
    return 0;
}