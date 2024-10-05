#include <stdio.h>

int main() {
    unsigned short N, A;
    unsigned int owed = 0;
    scanf("%hu", &N);

    for (int i = 0; i < N; i++) {
        scanf("%hu", &A);
        owed += A;
    }
    printf("%u\n", owed);
    return 0;
}