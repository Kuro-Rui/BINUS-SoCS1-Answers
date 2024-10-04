#include <stdio.h>

int main() {
    unsigned int N, answered = 0;
    scanf("%u", &N);

    unsigned short tc[N], ts[N], tv[N];
    for (int i = 0; i < N; i++) {
        scanf("%hu %hu %hu", &tc[i], &ts[i], &tv[i]);
        if (ts[i] > tv[i]) answered++;
    }
    printf("%u\n", answered);
    return 0;
}