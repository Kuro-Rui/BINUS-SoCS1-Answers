#include <stdio.h>

int main() {
    unsigned short T, A;
    unsigned long long B;
    scanf("%hu", &T);
    for (int i = 0; i < T; i++) {
        scanf("%hu %llu", &A, &B);
        printf("%.2f\n", (double)(A * B) / 360.0);
    }
    return 0;
}