#include <stdio.h>

int main() {
    int A, B, C, D;
    long long answers[3];
    for (int i = 0; i < 3; i++) {
        scanf(" (%d+%d)x(%d-%d)", &A, &B, &C, &D);
        answers[i] = (long long)(A + B) * (C - D);
    }
    printf("%lld %lld %lld\n", answers[0], answers[1], answers[2]);
    return 0;
}