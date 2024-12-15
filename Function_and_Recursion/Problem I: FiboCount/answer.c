#include <stdio.h>

unsigned int callCount;

unsigned int fibo(unsigned short n) {
    callCount++;
    if (n <= 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    unsigned short T, n;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu", &n);

        callCount = 0;
        // We don't necessarily need to assign this to a variable since we only need the callCount
        fibo(n);
        printf("Case #%d: %u\n", i, callCount);
    }
    return 0;
}