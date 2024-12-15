#include <stdio.h>

void printBranchSum(unsigned short arr[], unsigned short n, unsigned short index, unsigned short sum) {
    sum += arr[index];

    unsigned short left = 2 * index + 1;
    unsigned short right = left + 1;
    if (left < n) printBranchSum(arr, n, left, sum);
    if (right < n) printBranchSum(arr, n, right, sum);
    if (left >= n && right >= n) printf("%hu\n", sum);
}

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        unsigned short A[N];
        for (int i = 0; i < N; i++) scanf("%hu", &A[i]);

        printf("Case #%d:\n", t);
        printBranchSum(A, N, 0, 0);
    }
    return 0;
}