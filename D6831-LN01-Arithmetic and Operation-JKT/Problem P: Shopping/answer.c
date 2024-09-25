#include <stdio.h>

int main() {
    unsigned int N, P;
    for (int i = 0; i < 4; i++) {
        scanf("%u %u", &N, &P);
        printf("$%.2f\n", P / (1.0 - (double)N / 100.0));
    }
    return 0;
}