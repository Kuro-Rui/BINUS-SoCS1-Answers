#include <stdio.h>

unsigned short multipleOf3Count;

unsigned int F(unsigned short n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    if (n % 3 == 0) multipleOf3Count++;
    if (n % 5 == 0) return n * 2;
    return F(n - 1) + n + F(n - 2) + n - 2;
}

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        multipleOf3Count = 0;

        // Idk why the Online Judge doesn't accept directly giving F(N) after printf
        // Example: printf("Case #%d: %u %hu\n", t, F(N), multipleOf3Count) isn't considered correct
        unsigned int result = F(N);
        printf("Case #%d: %u %hu\n", t, result, multipleOf3Count);
    }
    return 0;
}