#include <stdio.h>

int main() {
    unsigned short T, P;
    unsigned int N;
    scanf("%hu", &T);
    for (int i = 0; i < T; i++) {
        scanf("%hu %u", &P, &N);
        printf("%.2f\n", (double)P / 100 * N);
    }
    return 0;
}