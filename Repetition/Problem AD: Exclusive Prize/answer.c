#include <stdio.h>

int main() {
    unsigned short N, A, max = 0, frequency[1001] = {0};
    scanf("%hu", &N);

    for (int i = 0; i < N; i++) {
        scanf("%hu", &A);
        frequency[A]++;
        if (frequency[A] > max) max = frequency[A];
    }
    printf("%hu\n", max);
    return 0;
}