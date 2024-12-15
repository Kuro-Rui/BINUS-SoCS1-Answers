#include <stdio.h>

unsigned int sum(unsigned int arr[], unsigned short length) {
    unsigned int total = 0;
    for (int i = 0; i < length; i++) total += arr[i];
    return total;
}

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        unsigned int A[N];
        for (int i = 0; i < N; i++) scanf("%u", &A[i]);
        printf("Case #%d: %u\n", t, sum(A, N));
    }
    return 0;
}