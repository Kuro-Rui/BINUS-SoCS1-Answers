#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);

    long long outcomes = (1LL << N) - 1;
    printf("%lld\n", outcomes);
    return 0;
}