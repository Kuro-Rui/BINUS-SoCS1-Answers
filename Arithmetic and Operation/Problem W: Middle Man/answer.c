#include <stdio.h>

int main() {
    unsigned short N;
    for (int i = 0; i < 3; i++) {
        scanf("%hu", &N);
        printf("%d\n", (N / 10) % 10);
    }
    return 0;
}