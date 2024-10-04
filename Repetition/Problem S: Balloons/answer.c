#include <stdio.h>

int main() {
    unsigned int N, P;
    scanf("%u %u", &N, &P);

    unsigned int b[N], pop = 0;
    for (int i = 0; i < N; i++) {
        scanf("%u", &b[i]);
        if (P > b[i]) pop++;
    }
    printf("%u\n", pop);
    return 0;
}